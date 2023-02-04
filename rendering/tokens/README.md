What are `synfig::rendering::Token`s
====================================
`synfig::rendering::Token`s are a way to associate metadata with types. There
are three major types of tokens:
1. `TaskToken`: associated with a rendering task.
2. `SurfaceToken`: associated with a rendering surface.
3. `ModeToken`: describes whether the rendering is done in software or hardware. 

The output of this example program is:
```
synfig(164982) [18:41:52] info: rendering threads 8
synfig(164982) [18:41:52] info: Loading modules from /usr/local//etc/synfig_modules.cfg
synfig(164982) [18:41:52] info: Loading lyr_freetype..
synfig(164982) [18:41:52] info: Loading lyr_std..
synfig(164982) [18:41:52] info: Loading mod_bmp..
synfig(164982) [18:41:52] info: Loading mod_dv..
synfig(164982) [18:41:52] info: Loading mod_example..
synfig(164982) [18:41:52] info: Loading mod_ffmpeg..
synfig(164982) [18:41:52] info: Loading mod_filter..
synfig(164982) [18:41:52] info: Loading mod_geometry..
synfig(164982) [18:41:52] info: Loading mod_gif..
synfig(164982) [18:41:52] info: Loading mod_gradient..
synfig(164982) [18:41:52] info: Loading mod_imagemagick..
synfig(164982) [18:41:52] info: Loading mod_jpeg..
synfig(164982) [18:41:52] info: Loading mod_noise..
synfig(164982) [18:41:52] info: Loading mod_openexr..
synfig(164982) [18:41:52] info: Loading mod_particle..
synfig(164982) [18:41:52] info: Loading mod_png..
synfig(164982) [18:41:52] info: Loading mod_ppm..
synfig(164982) [18:41:52] info: Loading mod_svg..
synfig(164982) [18:41:52] info: Loading mod_yuv420p..
synfig(164982) [18:41:52] info: Loading mod_mng..
synfig(164982) [18:41:52] info: Loading mod_libavcodec..
synfig(164982) [18:41:52] info: Loading mod_magickpp..
TokensParent
	TaskTokensParent
		TaskToken::CheckerBoard(abstract: 1, alternatives: software: TaskToken::CheckerBoardSW)
			TaskToken::CheckerBoardSW(abstract: 0)
		TaskToken::LumaKey(abstract: 1, alternatives: software: TaskToken::LumaKeySW)
			TaskToken::LumaKeySW(abstract: 0)
		TaskToken::Clamp(abstract: 1, alternatives: software: TaskToken::ClampSW)
			TaskToken::ClampSW(abstract: 0)
		TaskToken::TransformationPerspective(abstract: 1, alternatives: software: TaskToken::TaskTransformationPerspectiveSW)
			TaskToken::TaskTransformationPerspectiveSW(abstract: 0)
		TaskToken::SubQueue(abstract: 1)
		TaskToken::Surface(abstract: 1)
		TaskToken::LoskSurface(abstract: 1)
		TaskToken::List(abstract: 1)
		TaskToken::Event(abstract: 1)
		TaskToken::Blend(abstract: 1, alternatives: software: TaskToken::BlendSW)
			TaskToken::BlendSW(abstract: 0)
		TaskToken::Blur(abstract: 1, alternatives: software: TaskToken::BlurSW)
			TaskToken::BlurSW(abstract: 0)
		TaskToken::Contour(abstract: 1, alternatives: software: TaskToken::ContourSW)
			TaskToken::ContourSW(abstract: 0)
		TaskToken::Layer(abstract: 1, alternatives: software: TaskToken::LayerSW)
			TaskToken::LayerSW(abstract: 0)
		TaskToken::Mesh(abstract: 1, alternatives: software: TaskToken::MeshSW)
			TaskToken::MeshSW(abstract: 0)
		TaskToken::PixelProcessor(abstract: 1)
			TaskToken::PixelGamma(abstract: 1, alternatives: software: TaskToken::PixelGammaSW)
				TaskToken::PixelGammaSW(abstract: 0)
			TaskToken::PixelColorMatrix(abstract: 1, alternatives: software: TaskToken::PixelColorMatrixSW)
				TaskToken::PixelColorMatrixSW(abstract: 0)
		TaskToken::Transformation(abstract: 1)
			TaskToken::TransformationAffine(abstract: 1, alternatives: software: TaskToken::TransformationAffineSW)
				TaskToken::TransformationAffineSW(abstract: 0)
	ModeTokensParent
		ModeToken::software
	SurfaceTokensParent
		SurfaceToken::SurfaceFile
		SurfaceToken::SurfaceMemoryReadWrapper
		SurfaceToken::SurfaceSW
		SurfaceToken::SurfaceSWPacked
```

TODO
====
Document all different types of rendering tasks!
