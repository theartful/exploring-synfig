#include <iostream>
#include <typeinfo>

#include <synfig/main.h>
#include <synfig/rendering/surface.h>
#include <synfig/rendering/task.h>
#include <synfig/token.h>

void print_token_tree(int depth, synfig::Token::Handle crawler)
{
    auto surface_token =
        crawler.template as<const synfig::rendering::Surface::Token>();
    auto task_token =
        crawler.template as<const synfig::rendering::Task::Token>();
    auto mode_token = crawler.template as<const synfig::rendering::ModeToken>();

    for (int i = 0; i < depth; i++)
        std::cout << '\t';

    if (surface_token) {
        std::cout << "SurfaceToken::" << surface_token->name << '\n';
    } else if (mode_token) {
        std::cout << "ModeToken::" << mode_token->name << '\n';
    } else if (task_token) {
        std::cout << "TaskToken::" << task_token->name;
        std::cout << "(abstract: " << task_token->is_abstract();
        if (!task_token->alternatives().empty()) {
            std::cout << ", alternatives:";
            for (auto alternative : task_token->alternatives())
                std::cout << " " << alternative.first->name
                          << ": TaskToken::" << alternative.second->name;
        }
        std::cout << ")\n";
    } else if (synfig::Token::token.is_equal(crawler)) {
        std::cout << "TokensParent\n";
    } else if (synfig::rendering::Mode::mode_token.is_equal(crawler)) {
        std::cout << "ModeTokensParent\n";
    } else if (synfig::rendering::Task::token.is_equal(crawler)) {
        std::cout << "TaskTokensParent\n";
    } else if (synfig::rendering::Surface::token.is_equal(crawler)) {
        std::cout << "SurfaceTokensParent\n";
    } else {
        std::cout << "unknown token(" << std::hex << crawler
                  << ") typeid = " << typeid(crawler.operator->()).name()
                  << '\n';
    }

    for (synfig::Token::Handle child : crawler->children()) {
        print_token_tree(depth + 1, child);
    }
}

int main()
{
    synfig::Main synfig_main("/usr/local/");
    print_token_tree(0, synfig::Token::Handle(synfig::Token::token));
}
