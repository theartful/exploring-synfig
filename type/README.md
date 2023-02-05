What are `synfig::Type`s
========================

They are runtime type information for basic synfig types, and their associated
operations. Operations are:
1. Create
2. Destroy
3. Set
4. Put
5. Get
6. Copy
7. Equal
8. Less
9. To string

I don't understand the difference between set and put though, and I don't seem
to find any arithmetic operations.

The output of this example program is:
```
synfig(155632) [15:53:27] info: rendering threads 8
synfig(155632) [15:53:27] info: Loading modules from /usr/local//etc/synfig_modules.cfg
synfig(155632) [15:53:27] info: Loading lyr_freetype..
synfig(155632) [15:53:27] info: Loading lyr_std..
synfig(155632) [15:53:27] info: Loading mod_bmp..
synfig(155632) [15:53:27] info: Loading mod_dv..
synfig(155632) [15:53:27] info: Loading mod_example..
synfig(155632) [15:53:27] info: Loading mod_ffmpeg..
synfig(155632) [15:53:27] info: Loading mod_filter..
synfig(155632) [15:53:27] info: Loading mod_geometry..
synfig(155632) [15:53:27] info: Loading mod_gif..
synfig(155632) [15:53:27] info: Loading mod_gradient..
synfig(155632) [15:53:27] info: Loading mod_imagemagick..
synfig(155632) [15:53:27] info: Loading mod_jpeg..
synfig(155632) [15:53:27] info: Loading mod_noise..
synfig(155632) [15:53:27] info: Loading mod_openexr..
synfig(155632) [15:53:27] info: Loading mod_particle..
synfig(155632) [15:53:27] info: Loading mod_png..
synfig(155632) [15:53:27] info: Loading mod_ppm..
synfig(155632) [15:53:27] info: Loading mod_svg..
synfig(155632) [15:53:27] info: Loading mod_yuv420p..
synfig(155632) [15:53:27] info: Loading mod_mng..
synfig(155632) [15:53:27] info: Loading mod_libavcodec..
synfig(155632) [15:53:27] info: Loading mod_magickpp..
weighted_real:
    - id: 1
      version: 0.0
      name: "weighted_real"
      local_name: "weighted real"
      aliases: []
      default_value: "Weight (0.000000) Real (0.000000)"

weighted_bline_point:
    - id: 2
      version: 0.0
      name: "weighted_bline_point"
      local_name: "weighted spline_point"
      aliases: []
      default_value: "Weight (0.000000) BLinePoint (0.000000, 0.000000)"

weighted_matrix:
    - id: 3
      version: 0.0
      name: "weighted_matrix"
      local_name: "weighted matrix"
      aliases: []
      default_value: "Weight (0.000000) Matrix ( [   1.00    0.00    0.00]   [   0.00    1.00    0.00]  [   0.00    0.00    1.00] )"

weighted_segment:
    - id: 4
      version: 0.0
      name: "weighted_segment"
      local_name: "weighted segment"
      aliases: []
      default_value: "Weight (0.000000) Segment ((0.000000, 0.000000) to (0.000000, 0.000000))"

weighted_transformation:
    - id: 5
      version: 0.0
      name: "weighted_transformation"
      local_name: "weighted transformation"
      aliases: []
      default_value: "Weight (0.000000) Transformation (0.000000, 0.000000) (0.000000) (1.000000, 1.000000)"

weighted_vector:
    - id: 6
      version: 0.0
      name: "weighted_vector"
      local_name: "weighted vector"
      aliases: []
      default_value: "Weight (0.000000) Vector (0.000000, 0.000000)"

weighted_width_point:
    - id: 7
      version: 0.0
      name: "weighted_width_point"
      local_name: "weighted width_point"
      aliases: []
      default_value: "Weight (0.000000) WidthPoint (0.000000, 0.010000)"

nil:
    - id: 0
      version: 0.0
      name: "nil"
      local_name: "nil"
      aliases: ["null"]
      default_value: "Nil"

bool:
    - id: 8
      version: 0.0
      name: "bool"
      local_name: "bool"
      aliases: ["bool"]
      default_value: "Bool (false)"

integer:
    - id: 9
      version: 0.0
      name: "integer"
      local_name: "integer"
      aliases: ["int", "integer"]
      default_value: "Integer (0)"

angle:
    - id: 10
      version: 0.0
      name: "angle"
      local_name: "angle"
      aliases: ["degrees", "radians", "rotations"]
      default_value: "Angle (0.00)"

real:
    - id: 11
      version: 0.0
      name: "real"
      local_name: "real"
      aliases: ["float", "real"]
      default_value: "Real (0.000000)"

time:
    - id: 12
      version: 0.0
      name: "time"
      local_name: "time"
      aliases: ["time"]
      default_value: "Time (0s)"

vector:
    - id: 13
      version: 0.0
      name: "vector"
      local_name: "vector"
      aliases: ["point"]
      default_value: "Vector (0.000000, 0.000000)"

color:
    - id: 14
      version: 0.0
      name: "color"
      local_name: "color"
      aliases: []
      default_value: "Color (#000000 :  0.000)"

segment:
    - id: 15
      version: 0.0
      name: "segment"
      local_name: "segment"
      aliases: []
      default_value: "Segment ((0.000000, 0.000000) to (0.000000, 0.000000))"

bline_point:
    - id: 16
      version: 0.0
      name: "bline_point"
      local_name: "spline_point"
      aliases: ["blinepoint"]
      default_value: "BLinePoint (0.000000, 0.000000)"

matrix:
    - id: 17
      version: 0.0
      name: "matrix"
      local_name: "matrix"
      aliases: []
      default_value: "Matrix ( [   1.00    0.00    0.00]   [   0.00    1.00    0.00]  [   0.00    0.00    1.00] )"

bone_weight_pair:
    - id: 18
      version: 0.0
      name: "bone_weight_pair"
      local_name: "bone_weight_pair"
      aliases: []
      default_value: "Bone Weight Pair ((0.00) )"

width_point:
    - id: 19
      version: 0.0
      name: "width_point"
      local_name: "width_point"
      aliases: ["widthpoint"]
      default_value: "WidthPoint (0.000000, 0.010000)"

dash_item:
    - id: 20
      version: 0.0
      name: "dash_item"
      local_name: "dash_item"
      aliases: ["dashitem"]
      default_value: "DashItem (0.100000, 0.100000)"

list:
    - id: 21
      version: 0.0
      name: "list"
      local_name: "list"
      aliases: []
      default_value: "List (0 elements)"

canvas:
    - id: 22
      version: 0.0
      name: "canvas"
      local_name: "canvas"
      aliases: []
      default_value: "Canvas (NULL)"

string:
    - id: 23
      version: 0.0
      name: "string"
      local_name: "string"
      aliases: []
      default_value: "String ()"

gradient:
    - id: 24
      version: 0.0
      name: "gradient"
      local_name: "gradient"
      aliases: []
      default_value: "Gradient (0 cpoints)"

bone_object:
    - id: 25
      version: 0.0
      name: "bone_object"
      local_name: "bone_object"
      aliases: []
      default_value: "Bone (N= O=(0.0000 0.0000) a=0.0000 slx=1.0000 sx=1.0000 l=1.0000 w=0.1000 tw=0.1000 or=0.0000 P=(nil))"

bone_valuenode:
    - id: 26
      version: 0.0
      name: "bone_valuenode"
      local_name: "bone_valuenode"
      aliases: []
      default_value: "ValueNodeBone (NULL)"

transformation:
    - id: 27
      version: 0.0
      name: "transformation"
      local_name: "transformation"
      aliases: []
      default_value: "Transformation (0.000000, 0.000000) (0.000000) (1.000000, 1.000000)"

pair_bone_object_bone_object:
    - id: 28
      version: 0.0
      name: "pair_bone_object_bone_object"
      local_name: "Pair (bone_object, bone_object)"
      aliases: []
      default_value: "Pair (Bone (N= O=(0.0000 0.0000) a=0.0000 slx=1.0000 sx=1.0000 l=1.0000 w=0.1000 tw=0.1000 or=0.0000 P=(nil)), Bone (N= O=(0.0000 0.0000) a=0.0000 slx=1.0000 sx=1.0000 l=1.0000 w=0.1000 tw=0.1000 or=0.0000 P=(nil)))"
```
