#include <SDL2/SDL_image.h>
#include "../core/SDLHelper.h"
#include <math.h>
#include <carp_debug.h>
#include <carp_pattern.h>
#include <carp_system.h>
#include <carp_io.h>
#include <carp_string.h>
#include <carp_bool.h>
#include <carp_char.h>
#include <carp_float.h>
#include <carp_double.h>
#include <carp_long.h>
#include <carp_int.h>
#include <core.h>

//Types:

// Depth 50
typedef Array Array__Array__Obj;

// Depth 50
typedef Array Array__Obj;

// Depth 50
typedef Array Array__SDL_Event;

// Depth 50
typedef Array Array__Shot;

// Depth 50
typedef Array Array__Smoke;

// Depth 50
typedef Array Array__String;

// Depth 50
typedef Array Array__char;

// Depth 50
typedef Array Array__int;

// Depth 101
typedef String(*Fn__Pattern_MUL__String_MUL__String_MUL__int_String)(Pattern*, String*, String*, int);

// Depth 101
typedef bool(*Fn__Pattern_MUL__String_MUL__bool)(Pattern*, String*);

// Depth 101
typedef int(*Fn__Pattern_MUL__String_MUL__int)(Pattern*, String*);

// Depth 101
typedef Pattern(*Fn__String_MUL__Pattern)(String*);

// Depth 101
typedef String(*Fn__String_MUL__String)(String*);

// Depth 101
typedef bool(*Fn__String_MUL__String_MUL__bool)(String*, String*);

// Depth 101
typedef char*(*Fn__String_MUL__char_MUL_)(String*);

// Depth 101
typedef int(*Fn__String_MUL__int)(String*);

// Depth 101
typedef String(*Fn__String_MUL__int_String)(String*, int);

// Depth 101
typedef char(*Fn__String_MUL__int_char)(String*, int);

// Depth 101
typedef void(*Fn__String_MUL__void)(String*);

// Depth 101
typedef String(*Fn__String_String_String)(String, String);

// Depth 101
typedef char(*Fn___char)();

// Depth 101
typedef int(*Fn___int)();

// Depth 101
typedef void(*Fn___void)();

// Depth 101
typedef bool(*Fn__bool_MUL__bool)(bool*);

// Depth 101
typedef String(*Fn__bool_String)(bool);

// Depth 101
typedef bool(*Fn__bool_bool)(bool);

// Depth 101
typedef bool(*Fn__bool_bool_bool)(bool, bool);

// Depth 101
typedef char(*Fn__char_MUL__char)(char*);

// Depth 101
typedef void(*Fn__char_MUL__char_MUL__void)(char*, char*);

// Depth 101
typedef String(*Fn__char_String)(char);

// Depth 101
typedef bool(*Fn__char_char_bool)(char, char);

// Depth 101
typedef int(*Fn__char_int)(char);

// Depth 101
typedef double(*Fn__double_MUL__double)(double*);

// Depth 101
typedef String(*Fn__double_String)(double);

// Depth 101
typedef double(*Fn__double_double)(double);

// Depth 101
typedef bool(*Fn__double_double_bool)(double, double);

// Depth 101
typedef double(*Fn__double_double_double)(double, double);

// Depth 101
typedef float(*Fn__float_MUL__float)(float*);

// Depth 101
typedef String(*Fn__float_String)(float);

// Depth 101
typedef double(*Fn__float_double)(float);

// Depth 101
typedef float(*Fn__float_float)(float);

// Depth 101
typedef bool(*Fn__float_float_bool)(float, float);

// Depth 101
typedef float(*Fn__float_float_float)(float, float);

// Depth 101
typedef int(*Fn__float_int)(float);

// Depth 101
typedef int(*Fn__int_MUL__int)(int*);

// Depth 101
typedef int(*Fn__int_MUL__int_MUL__int)(int*, int*);

// Depth 101
typedef String(*Fn__int_String)(int);

// Depth 101
typedef String*(*Fn__int_String_MUL_)(int);

// Depth 101
typedef bool(*Fn__int_bool)(int);

// Depth 101
typedef char(*Fn__int_char)(int);

// Depth 101
typedef float(*Fn__int_float)(int);

// Depth 101
typedef int(*Fn__int_int)(int);

// Depth 101
typedef bool(*Fn__int_int_bool)(int, int);

// Depth 101
typedef int(*Fn__int_int_int)(int, int);

// Depth 101
typedef void(*Fn__int_void)(int);

// Depth 101
typedef long(*Fn__long_MUL__long)(long*);

// Depth 101
typedef String(*Fn__long_String)(long);

// Depth 101
typedef bool(*Fn__long_bool)(long);

// Depth 101
typedef bool(*Fn__long_long_bool)(long, long);

// Depth 101
typedef long(*Fn__long_long_long)(long, long);

// Depth 101
typedef struct {
    int x;
    int y;
    bool left;
    bool right;
} MouseState;

// Depth 101
typedef struct {
    int obj_MINUS_index;
    bool alive;
} Shot;

// Depth 101
typedef struct {
    float x;
    float y;
} Vec2;

// Depth 102
typedef struct {
    SDL_Texture* corvette;
    SDL_Texture* slime;
    SDL_Texture* shot;
    SDL_Texture* smoke;
    SDL_Texture* earth;
    SDL_Texture* mothership;
} Art;

// Depth 102
typedef Array__Obj(*Fn__Array__Array__Obj_MUL__Array__Obj)(Array__Array__Obj*);

// Depth 102
typedef int(*Fn__Array__Array__Obj_MUL__int)(Array__Array__Obj*);

// Depth 102
typedef Array__Obj*(*Fn__Array__Array__Obj_MUL__int_Array__Obj_MUL_)(Array__Array__Obj*, int);

// Depth 102
typedef Array__Obj(*Fn__Array__Obj_Array__Obj)(Array__Obj);

// Depth 102
typedef Array__Obj(*Fn__Array__Obj_MUL__Array__Obj)(Array__Obj*);

// Depth 102
typedef String(*Fn__Array__Obj_MUL__String)(Array__Obj*);

// Depth 102
typedef int(*Fn__Array__Obj_MUL__int)(Array__Obj*);

// Depth 102
typedef int(*Fn__Array__SDL_Event_MUL__int)(Array__SDL_Event*);

// Depth 102
typedef SDL_Event*(*Fn__Array__SDL_Event_MUL__int_SDL_Event_MUL_)(Array__SDL_Event*, int);

// Depth 102
typedef Array__SDL_Event(*Fn__Array__SDL_Event_SDL_Event_Array__SDL_Event)(Array__SDL_Event, SDL_Event);

// Depth 102
typedef Array__Shot(*Fn__Array__Shot_Array__Shot)(Array__Shot);

// Depth 102
typedef String(*Fn__Array__Shot_MUL__String)(Array__Shot*);

// Depth 102
typedef int(*Fn__Array__Shot_MUL__int)(Array__Shot*);

// Depth 102
typedef int(*Fn__Array__Smoke_MUL__int)(Array__Smoke*);

// Depth 102
typedef String(*Fn__Array__String_MUL__String)(Array__String*);

// Depth 102
typedef int(*Fn__Array__String_MUL__int)(Array__String*);

// Depth 102
typedef Array__String(*Fn__Array__String_MUL__int_Array__String)(Array__String*, int);

// Depth 102
typedef String*(*Fn__Array__String_MUL__int_String_MUL_)(Array__String*, int);

// Depth 102
typedef void(*Fn__Array__String_MUL__int_String_void)(Array__String*, int, String);

// Depth 102
typedef Array__String(*Fn__Array__String_MUL__int_int_Array__String)(Array__String*, int, int);

// Depth 102
typedef Array__String(*Fn__Array__String_String_Array__String)(Array__String, String);

// Depth 102
typedef Array__char(*Fn__Array__char_Array__char)(Array__char);

// Depth 102
typedef Pattern(*Fn__Array__char_MUL__Pattern)(Array__char*);

// Depth 102
typedef String(*Fn__Array__char_MUL__String)(Array__char*);

// Depth 102
typedef int(*Fn__Array__char_MUL__int)(Array__char*);

// Depth 102
typedef Array__char(*Fn__Array__char_MUL__int_Array__char)(Array__char*, int);

// Depth 102
typedef char*(*Fn__Array__char_MUL__int_char_MUL_)(Array__char*, int);

// Depth 102
typedef void(*Fn__Array__char_MUL__int_char_void)(Array__char*, int, char);

// Depth 102
typedef Array__char(*Fn__Array__char_MUL__int_int_Array__char)(Array__char*, int, int);

// Depth 102
typedef Array__char(*Fn__Array__char_char_Array__char)(Array__char, char);

// Depth 102
typedef int(*Fn__Array__int_MUL__int)(Array__int*);

// Depth 102
typedef int*(*Fn__Array__int_MUL__int_int_MUL_)(Array__int*, int);

// Depth 102
typedef void(*Fn__Array__int_MUL__int_int_void)(Array__int*, int, int);

// Depth 102
typedef char(*Fn__FILE_MUL__char)(FILE*);

// Depth 102
typedef void(*Fn__FILE_MUL__void)(FILE*);

// Depth 102
typedef Array__String(*Fn__Fn__String_MUL__String_Array__String_MUL__Array__String)(Fn__String_MUL__String, Array__String*);

// Depth 102
typedef int(*Fn__SDL_Color_MUL__int)(SDL_Color*);

// Depth 102
typedef bool(*Fn__SDL_EventType_SDL_EventType_bool)(SDL_EventType, SDL_EventType);

// Depth 102
typedef SDL_EventType(*Fn__SDL_Event_MUL__SDL_EventType)(SDL_Event*);

// Depth 102
typedef SDL_Keycode(*Fn__SDL_Event_MUL__SDL_Keycode)(SDL_Event*);

// Depth 102
typedef bool(*Fn__SDL_Event_MUL__bool)(SDL_Event*);

// Depth 102
typedef bool(*Fn__SDL_Keycode_SDL_Keycode_bool)(SDL_Keycode, SDL_Keycode);

// Depth 102
typedef String(*Fn__SDL_Keycode_String)(SDL_Keycode);

// Depth 102
typedef int*(*Fn__SDL_Point_MUL__int_MUL_)(SDL_Point*);

// Depth 102
typedef int*(*Fn__SDL_Rect_MUL__int_MUL_)(SDL_Rect*);

// Depth 102
typedef SDL_Renderer*(*Fn__SDL_Renderer_MUL__MUL__SDL_Renderer_MUL_)(SDL_Renderer**);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_BlendMode_void)(SDL_Renderer*, SDL_BlendMode);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_Color_MUL__void)(SDL_Renderer*, SDL_Color*);

// Depth 102
typedef SDL_Renderer*(*Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_)(SDL_Renderer*);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_Texture_MUL__SDL_Point_MUL__void)(SDL_Renderer*, SDL_Texture*, SDL_Point*);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_Texture_MUL__SDL_Rect_MUL__SDL_Rect_MUL__double_SDL_Point_MUL__SDL_RendererFlip_void)(SDL_Renderer*, SDL_Texture*, SDL_Rect*, SDL_Rect*, double, SDL_Point*, SDL_RendererFlip);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__SDL_Texture_MUL__SDL_Rect_MUL__SDL_Rect_MUL__void)(SDL_Renderer*, SDL_Texture*, SDL_Rect*, SDL_Rect*);

// Depth 102
typedef SDL_Texture*(*Fn__SDL_Renderer_MUL__String_MUL__String_MUL__SDL_Texture_MUL_)(SDL_Renderer*, String*, String*);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__String_MUL__void)(SDL_Renderer*, String*);

// Depth 102
typedef SDL_Texture*(*Fn__SDL_Renderer_MUL__char_MUL__SDL_Texture_MUL_)(SDL_Renderer*, char*);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__int_int_int_int_void)(SDL_Renderer*, int, int, int, int);

// Depth 102
typedef void(*Fn__SDL_Renderer_MUL__void)(SDL_Renderer*);

// Depth 102
typedef SDL_Texture*(*Fn__SDL_Texture_MUL__MUL__SDL_Texture_MUL_)(SDL_Texture**);

// Depth 102
typedef SDL_Rect(*Fn__SDL_Texture_MUL__SDL_Rect)(SDL_Texture*);

// Depth 102
typedef SDL_Texture*(*Fn__SDL_Texture_MUL__SDL_Texture_MUL_)(SDL_Texture*);

// Depth 102
typedef void(*Fn__SDL_Texture_MUL__int_MUL__int_MUL__int_MUL__int_MUL__void)(SDL_Texture*, int*, int*, int*, int*);

// Depth 102
typedef SDL_Window*(*Fn__SDL_Window_MUL__MUL__SDL_Window_MUL_)(SDL_Window**);

// Depth 102
typedef SDL_Window*(*Fn__SDL_Window_MUL__SDL_Window_MUL_)(SDL_Window*);

// Depth 102
typedef void(*Fn__SDL_Window_MUL__char_MUL__void)(SDL_Window*, char*);

// Depth 102
typedef void(*Fn__SDL_Window_MUL__void)(SDL_Window*);

// Depth 102
typedef Array__char(*Fn__String_MUL__Array__char)(String*);

// Depth 102
typedef Array__String(*Fn__String_MUL__Array__char_MUL__Array__String)(String*, Array__char*);

// Depth 102
typedef FILE*(*Fn__String_MUL__String_MUL__FILE_MUL_)(String*, String*);

// Depth 102
typedef Array__SDL_Event(*Fn___Array__SDL_Event)();

// Depth 102
typedef SDL_Event(*Fn___SDL_Event)();

// Depth 102
typedef Array__Obj(*Fn__int_Array__Obj)(int);

// Depth 102
typedef Array__Shot(*Fn__int_Array__Shot)(int);

// Depth 102
typedef Array__Smoke(*Fn__int_Array__Smoke)(int);

// Depth 102
typedef Array__String(*Fn__int_Array__String)(int);

// Depth 102
typedef Array__char(*Fn__int_Array__char)(int);

// Depth 102
typedef Array__int(*Fn__int_Array__int)(int);

// Depth 102
typedef Array__char(*Fn__int_Fn___char_Array__char)(int, Fn___char);

// Depth 102
typedef Array__char(*Fn__int_char_MUL__Array__char)(int, char*);

// Depth 102
typedef SDL_Point(*Fn__int_int_SDL_Point)(int, int);

// Depth 102
typedef Array__int(*Fn__int_int_int_Array__int)(int, int, int);

// Depth 102
typedef SDL_Color(*Fn__int_int_int_SDL_Color)(int, int, int);

// Depth 102
typedef void(*Fn__int_int_int_SDL_Window_MUL__MUL__SDL_Renderer_MUL__MUL__void)(int, int, int, SDL_Window**, SDL_Renderer**);

// Depth 102
typedef SDL_Rect(*Fn__int_int_int_int_SDL_Rect)(int, int, int, int);

// Depth 102
typedef struct {
    Array__Obj objs;
    Array__Shot shots;
} GameState;

// Depth 102
typedef struct {
    SDL_Window* window;
    SDL_Renderer* renderer;
    int fps;
} SDLApp;

// Depth 103
typedef Shot*(*Fn__Array__Shot_MUL__int_Shot_MUL_)(Array__Shot*, int);

// Depth 103
typedef void(*Fn__Array__Shot_MUL__int_Shot_void)(Array__Shot*, int, Shot);

// Depth 103
typedef bool*(*Fn__Shot_MUL__bool_MUL_)(Shot*);

// Depth 103
typedef void(*Fn__Shot_MUL__bool_void)(Shot*, bool);

// Depth 103
typedef int*(*Fn__Shot_MUL__int_MUL_)(Shot*);

// Depth 103
typedef Vec2(*Fn__Vec2_MUL__Vec2)(Vec2*);

// Depth 103
typedef Vec2(*Fn__Vec2_MUL__Vec2_MUL__Vec2)(Vec2*, Vec2*);

// Depth 103
typedef bool(*Fn__Vec2_MUL__bool)(Vec2*);

// Depth 103
typedef float*(*Fn__Vec2_MUL__float_MUL_)(Vec2*);

// Depth 103
typedef Vec2(*Fn__Vec2_Vec2)(Vec2);

// Depth 103
typedef Vec2(*Fn__float_float_Vec2)(float, float);

// Depth 103
typedef Shot(*Fn__int_MUL__Shot)(int*);

// Depth 103
typedef Shot(*Fn__int_bool_Shot)(int, bool);

// Depth 103
typedef MouseState(*Fn__int_int_bool_bool_MouseState)(int, int, bool, bool);

// Depth 103
typedef struct {
    Vec2 pos;
    float age;
} Smoke;

// Depth 104
typedef GameState(*Fn__Array__Obj_Array__Shot_GameState)(Array__Obj, Array__Shot);

// Depth 104
typedef SDL_Texture**(*Fn__Art_MUL__SDL_Texture_MUL__MUL_)(Art*);

// Depth 104
typedef Array__Shot(*Fn__Fn__int_MUL__Shot_Array__int_MUL__Array__Shot)(Fn__int_MUL__Shot, Array__int*);

// Depth 104
typedef GameState(*Fn__GameState_Array__Obj_GameState)(GameState, Array__Obj);

// Depth 104
typedef GameState(*Fn__GameState_GameState)(GameState);

// Depth 104
typedef Array__Obj*(*Fn__GameState_MUL__Array__Obj_MUL_)(GameState*);

// Depth 104
typedef Array__Shot*(*Fn__GameState_MUL__Array__Shot_MUL_)(GameState*);

// Depth 104
typedef void(*Fn__GameState_MUL__Vec2_float_void)(GameState*, Vec2, float);

// Depth 104
typedef void(*Fn__SDLApp_MUL__SDL_Renderer_MUL__GameState_MUL__void)(SDLApp*, SDL_Renderer*, GameState*);

// Depth 104
typedef SDL_Renderer**(*Fn__SDLApp_MUL__SDL_Renderer_MUL__MUL_)(SDLApp*);

// Depth 104
typedef SDL_Window**(*Fn__SDLApp_MUL__SDL_Window_MUL__MUL_)(SDLApp*);

// Depth 104
typedef int*(*Fn__SDLApp_MUL__int_MUL_)(SDLApp*);

// Depth 104
typedef void(*Fn__SDLApp_MUL__void)(SDLApp*);

// Depth 104
typedef Art(*Fn__SDL_Texture_MUL__SDL_Texture_MUL__SDL_Texture_MUL__SDL_Texture_MUL__SDL_Texture_MUL__SDL_Texture_MUL__Art)(SDL_Texture*, SDL_Texture*, SDL_Texture*, SDL_Texture*, SDL_Texture*, SDL_Texture*);

// Depth 104
typedef SDLApp(*Fn__SDL_Window_MUL__SDL_Renderer_MUL__int_SDLApp)(SDL_Window*, SDL_Renderer*, int);

// Depth 104
typedef SDLApp(*Fn__String_MUL__int_int_SDLApp)(String*, int, int);

// Depth 104
typedef GameState(*Fn___GameState)();

// Depth 105
typedef Smoke*(*Fn__Array__Smoke_MUL__int_Smoke_MUL_)(Array__Smoke*, int);

// Depth 105
typedef void(*Fn__Array__Smoke_MUL__int_Smoke_void)(Array__Smoke*, int, Smoke);

// Depth 105
typedef Fn__Art_MUL__SDL_Texture_MUL__MUL_(*Fn__Fn__Art_MUL__SDL_Texture_MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_)(Fn__Art_MUL__SDL_Texture_MUL__MUL_);

// Depth 105
typedef Fn__Art_MUL__SDL_Texture_MUL__MUL_(*Fn__Fn__Art_MUL__SDL_Texture_MUL__MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_)(Fn__Art_MUL__SDL_Texture_MUL__MUL_*);

// Depth 105
typedef void(*Fn__SDLApp_MUL__Fn__SDLApp_MUL__void_Fn__GameState_GameState_Fn__SDLApp_MUL__SDL_Renderer_MUL__GameState_MUL__void_GameState_void)(SDLApp*, Fn__SDLApp_MUL__void, Fn__GameState_GameState, Fn__SDLApp_MUL__SDL_Renderer_MUL__GameState_MUL__void, GameState);

// Depth 105
typedef void(*Fn__SDL_Renderer_MUL__Smoke_MUL__void)(SDL_Renderer*, Smoke*);

// Depth 105
typedef Smoke(*Fn__Smoke_MUL__Smoke)(Smoke*);

// Depth 105
typedef Vec2*(*Fn__Smoke_MUL__Vec2_MUL_)(Smoke*);

// Depth 105
typedef void(*Fn__Smoke_MUL__Vec2_void)(Smoke*, Vec2);

// Depth 105
typedef float*(*Fn__Smoke_MUL__float_MUL_)(Smoke*);

// Depth 105
typedef void(*Fn__Smoke_MUL__float_void)(Smoke*, float);

// Depth 105
typedef void(*Fn__Smoke_MUL__void)(Smoke*);

// Depth 105
typedef Smoke(*Fn__Vec2_float_Smoke)(Vec2, float);

// Depth 105
typedef Array__Smoke(*Fn__int_Smoke_MUL__Array__Smoke)(int, Smoke*);

// Depth 105
typedef struct {
    Vec2 pos;
    float radius;
    float dir;
    float speed;
    void* sprite;
} Obj;

// Depth 107
typedef Obj*(*Fn__Array__Obj_MUL__int_Obj_MUL_)(Array__Obj*, int);

// Depth 107
typedef void(*Fn__Array__Obj_MUL__int_Obj_void)(Array__Obj*, int, Obj);

// Depth 107
typedef Array__Obj(*Fn__Array__Obj_Obj_Array__Obj)(Array__Obj, Obj);

// Depth 107
typedef void(*Fn__GameState_MUL__Obj_MUL__void)(GameState*, Obj*);

// Depth 107
typedef Fn__Art_MUL__SDL_Texture_MUL__MUL_*(*Fn__Obj_MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL__MUL_)(Obj*);

// Depth 107
typedef Obj(*Fn__Obj_MUL__Obj)(Obj*);

// Depth 107
typedef Vec2*(*Fn__Obj_MUL__Vec2_MUL_)(Obj*);

// Depth 107
typedef void(*Fn__Obj_MUL__Vec2_void)(Obj*, Vec2);

// Depth 107
typedef float*(*Fn__Obj_MUL__float_MUL_)(Obj*);

// Depth 107
typedef void(*Fn__Obj_MUL__float_void)(Obj*, float);

// Depth 107
typedef Obj(*Fn__Obj_Obj)(Obj);

// Depth 107
typedef Obj(*Fn__Obj_Vec2_Obj)(Obj, Vec2);

// Depth 107
typedef void(*Fn__SDL_Renderer_MUL__Obj_MUL__void)(SDL_Renderer*, Obj*);

// Depth 107
typedef Obj(*Fn__Vec2_float_float_float_Fn__Art_MUL__SDL_Texture_MUL__MUL__Obj)(Vec2, float, float, float, Fn__Art_MUL__SDL_Texture_MUL__MUL_);

// Depth 107
typedef Obj(*Fn___Obj)();

// Depth 107
typedef Obj(*Fn__int_Obj)(int);

// Depth 108
typedef Array__Obj(*Fn__Fn__Obj_Obj_Array__Obj_Array__Obj)(Fn__Obj_Obj, Array__Obj);

// Depth 108
typedef Array__Obj(*Fn__int_Fn___Obj_Array__Obj)(int, Fn___Obj);


//Declarations:

// Depth 500
bool _LT__EQ___float(float a, float b);

// Depth 500
bool _LT__EQ___int(int a, int b);

// Depth 500
bool _GT__EQ___int(int a, int b);

// Depth 500
void ai(GameState* state, Obj* obj);

// Depth 500
String append_MINUS_slash__String_MUL_(String* s);

// Depth 500
Art art;

// Depth 500
Fn__Art_MUL__SDL_Texture_MUL__MUL_ copy__Art_MUL__SDL_Texture_MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_ (Fn__Art_MUL__SDL_Texture_MUL__MUL_* ref);

// Depth 500
Shot dead_MINUS_shot(int* i);

// Depth 500
Obj dead_MINUS_shot_MINUS_obj();

// Depth 500
String dir_MINUS_from_MINUS_path(String* path);

// Depth 500
void draw__SDLApp_MUL_(SDLApp* app, SDL_Renderer* rend, GameState* state);

// Depth 500
void event_MINUS_handler(SDLApp* app);

// Depth 500
int index_MINUS_of_MINUS_dead_MINUS_shot(Array__Shot* shots);

// Depth 500
void load_MINUS_assets__String_MUL_(SDL_Renderer* rend, String* img_MINUS_dir);

// Depth 500
SDL_Texture* load_MINUS_img__String_MUL__String_MUL_(SDL_Renderer* rend, String* img_MINUS_dir, String* name);

// Depth 500
void log__String_MUL_(String* msg);

// Depth 500
int main(int argc, char** argv);

// Depth 500
GameState make_MINUS_state();

// Depth 500
int max__int(int a, int b);

// Depth 500
bool pos_MINUS_outside_QMARK_(Vec2* pos);

// Depth 500
bool pos_QMARK___int(int x);

// Depth 500
String prn__Art_MUL__SDL_Texture_MUL__MUL_ (void *f);

// Depth 500
Obj random_MINUS_alien();

// Depth 500
Obj random_MINUS_human();

// Depth 500
Obj random_MINUS_ship(int side);

// Depth 500
void reuse_MINUS_smoke(Vec2 pos);

// Depth 500
int screen_MINUS_height;

// Depth 500
int screen_MINUS_width;

// Depth 500
void shoot(GameState* state, Vec2 pos, float dir);

// Depth 500
Array__Smoke smokes;

// Depth 500
int team_MINUS_alien;

// Depth 500
int team_MINUS_human;

// Depth 500
GameState tick(GameState state);

// Depth 1000

// Depth 500
Array Array_allocate__Obj (int n);

// Depth 500
Array Array_allocate__Shot (int n);

// Depth 500
Array Array_allocate__Smoke (int n);

// Depth 500
Array Array_allocate__String (int n);

// Depth 500
Array Array_allocate__char (int n);

// Depth 500
Array Array_allocate__int (int n);

// Depth 500
void Array_aset_BANG___char (Array *aRef, int n, char newValue);

// Depth 500
void Array_aset_BANG___int (Array *aRef, int n, int newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Obj (Array *aRef, int n, Obj newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Shot (Array *aRef, int n, Shot newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___Smoke (Array *aRef, int n, Smoke newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue);

// Depth 500
void Array_aset_MINUS_uninitialized_BANG___char (Array *aRef, int n, char newValue);

// Depth 500
Array__Obj Array_concat__Obj(Array__Array__Obj* xs);

// Depth 500
Array__String Array_copy_MINUS_map__String_String(Fn__String_MUL__String f, Array__String* a);

// Depth 500
Array__Shot Array_copy_MINUS_map__int_Shot(Fn__int_MUL__Shot f, Array__int* a);

// Depth 500
Array Array_copy__Obj (Array* a);

// Depth 500
Array Array_copy__Shot (Array* a);

// Depth 500
int Array_count__Array__Obj (Array *a);

// Depth 500
int Array_count__Obj (Array *a);

// Depth 500
int Array_count__SDL_Event (Array *a);

// Depth 500
int Array_count__Shot (Array *a);

// Depth 500
int Array_count__Smoke (Array *a);

// Depth 500
int Array_count__String (Array *a);

// Depth 500
int Array_count__char (Array *a);

// Depth 500
int Array_count__int (Array *a);

// Depth 500
void Array_delete__Array__Obj (Array a);

// Depth 500
void Array_delete__Obj (Array a);

// Depth 500
void Array_delete__SDL_Event (Array a);

// Depth 500
void Array_delete__Shot (Array a);

// Depth 500
void Array_delete__Smoke (Array a);

// Depth 500
void Array_delete__String (Array a);

// Depth 500
void Array_delete__char (Array a);

// Depth 500
void Array_delete__int (Array a);

// Depth 500
Array Array_endo_MINUS_map__Obj(Fn__Obj_Obj f, Array a);

// Depth 500
Array__Obj* Array_nth__Array__Obj (Array *aRef, int n);

// Depth 500
Obj* Array_nth__Obj (Array *aRef, int n);

// Depth 500
SDL_Event* Array_nth__SDL_Event (Array *aRef, int n);

// Depth 500
Shot* Array_nth__Shot (Array *aRef, int n);

// Depth 500
Smoke* Array_nth__Smoke (Array *aRef, int n);

// Depth 500
String* Array_nth__String (Array *aRef, int n);

// Depth 500
char* Array_nth__char (Array *aRef, int n);

// Depth 500
int* Array_nth__int (Array *aRef, int n);

// Depth 500
Array__String Array_prefix_MINUS_array__String(Array__String* xs, int end_MINUS_index);

// Depth 500
Array__char Array_prefix_MINUS_array__char(Array__char* xs, int end_MINUS_index);

// Depth 500
String Array_prn__Obj(Array__Obj* x);

// Depth 500
String Array_prn__Shot(Array__Shot* x);

// Depth 500
Array Array_push_MINUS_back__Obj(Array a, Obj value);

// Depth 500
Array Array_push_MINUS_back__SDL_Event(Array a, SDL_Event value);

// Depth 500
Array Array_push_MINUS_back__String(Array a, String value);

// Depth 500
Array Array_push_MINUS_back__char(Array a, char value);

// Depth 500
Array__int Array_range(int start, int end, int step);

// Depth 500
Array__Obj Array_repeat__Obj(int n, Fn___Obj f);

// Depth 500
Array__char Array_repeat__char(int n, Fn___char f);

// Depth 500
Array__Smoke Array_replicate__Smoke(int n, Smoke* e);

// Depth 500
Array__char Array_replicate__char(int n, char* e);

// Depth 500
Array__char Array_reverse__char(Array__char a);

// Depth 500
String Array_str__Obj (Array* a);

// Depth 500
String Array_str__Shot (Array* a);

// Depth 500
Array__String Array_subarray__String(Array__String* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__char Array_subarray__char(Array__char* xs, int start_MINUS_index, int end_MINUS_index);

// Depth 500
Array__char Array_suffix_MINUS_array__char(Array__char* xs, int start_MINUS_index);

// Depth 1000

// Depth 500
Art Art_copy(Art* pRef);

// Depth 500
SDL_Texture** Art_corvette(Art* p);

// Depth 500
void Art_delete(Art p);

// Depth 500
SDL_Texture** Art_earth(Art* p);

// Depth 500
Art Art_init(SDL_Texture* corvette, SDL_Texture* slime, SDL_Texture* shot, SDL_Texture* smoke, SDL_Texture* earth, SDL_Texture* mothership);

// Depth 500
SDL_Texture** Art_mothership(Art* p);

// Depth 500
String Art_prn(Art *p);

// Depth 500
Art Art_set_MINUS_corvette(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_corvette_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
Art Art_set_MINUS_earth(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_earth_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
Art Art_set_MINUS_mothership(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_mothership_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
Art Art_set_MINUS_shot(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_shot_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
Art Art_set_MINUS_slime(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_slime_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
Art Art_set_MINUS_smoke(Art p, SDL_Texture* newValue);

// Depth 500
void Art_set_MINUS_smoke_BANG_(Art* pRef, SDL_Texture* newValue);

// Depth 500
SDL_Texture** Art_shot(Art* p);

// Depth 500
SDL_Texture** Art_slime(Art* p);

// Depth 500
SDL_Texture** Art_smoke(Art* p);

// Depth 500
String Art_str(Art *p);

// Depth 500
Art Art_update_MINUS_corvette(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater);

// Depth 500
Art Art_update_MINUS_earth(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater);

// Depth 500
Art Art_update_MINUS_mothership(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater);

// Depth 500
Art Art_update_MINUS_shot(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater);

// Depth 500
Art Art_update_MINUS_slime(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater);

// Depth 500
Art Art_update_MINUS_smoke(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater);

// Depth 1000

// Depth 500
String Bool_prn(bool x);

// Depth 1000

// Depth 500
bool Char__DIV__EQ_(char a, char b);

// Depth 500
int Char_meaning(char* char_MINUS_ref);

// Depth 500
String Char_prn(char x);

// Depth 500
char Char_random();

// Depth 500
char Char_random_MINUS_between(char a, char b);

// Depth 1000

// Depth 500
bool CharRef__EQ_(char* a, char* b);

// Depth 1000

// Depth 500
bool Double__DIV__EQ_(double x, double y);

// Depth 500
double Double_add_MINUS_ref(double* x, double* y);

// Depth 500
bool Double_approx(double x, double y);

// Depth 500
double Double_e;

// Depth 500
double Double_pi;

// Depth 500
String Double_prn(double x);

// Depth 500
double Double_zero();

// Depth 1000

// Depth 500
bool DoubleRef__LT_(double* a, double* b);

// Depth 500
bool DoubleRef__EQ_(double* a, double* b);

// Depth 500
bool DoubleRef__GT_(double* a, double* b);

// Depth 1000

// Depth 500
bool Float__DIV__EQ_(float x, float y);

// Depth 500
float Float_add_MINUS_ref(float* x, float* y);

// Depth 500
bool Float_approx(float x, float y);

// Depth 500
float Float_pi;

// Depth 500
String Float_prn(float x);

// Depth 500
float Float_zero();

// Depth 1000

// Depth 500
bool FloatRef__LT_(float* a, float* b);

// Depth 500
bool FloatRef__EQ_(float* a, float* b);

// Depth 500
bool FloatRef__GT_(float* a, float* b);

// Depth 1000

// Depth 500
GameState GameState_copy(GameState* pRef);

// Depth 500
void GameState_delete(GameState p);

// Depth 500
GameState GameState_init(Array__Obj objs, Array__Shot shots);

// Depth 500
Array__Obj* GameState_objs(GameState* p);

// Depth 500
String GameState_prn(GameState *p);

// Depth 500
GameState GameState_set_MINUS_objs(GameState p, Array__Obj newValue);

// Depth 500
void GameState_set_MINUS_objs_BANG_(GameState* pRef, Array__Obj newValue);

// Depth 500
GameState GameState_set_MINUS_shots(GameState p, Array__Shot newValue);

// Depth 500
void GameState_set_MINUS_shots_BANG_(GameState* pRef, Array__Shot newValue);

// Depth 500
Array__Shot* GameState_shots(GameState* p);

// Depth 500
String GameState_str(GameState *p);

// Depth 500
GameState GameState_update_MINUS_objs(GameState p, Fn__Array__Obj_Array__Obj updater);

// Depth 500
GameState GameState_update_MINUS_shots(GameState p, Fn__Array__Shot_Array__Shot updater);

// Depth 1000

// Depth 500
double Geometry_degree_MINUS_to_MINUS_radians(double n);

// Depth 500
double Geometry_radians_MINUS_to_MINUS_degree(double n);

// Depth 1000

// Depth 500
String IO_read_MINUS__GT_EOF(String* filename);

// Depth 1000

// Depth 500
int Int_add_MINUS_ref(int* x, int* y);

// Depth 500
bool Int_even_QMARK_(int a);

// Depth 500
bool Int_odd_QMARK_(int a);

// Depth 500
int Int_pow(int x, int y);

// Depth 500
String Int_prn(int x);

// Depth 500
int Int_zero();

// Depth 1000

// Depth 500
bool IntRef__LT_(int* a, int* b);

// Depth 500
bool IntRef__EQ_(int* a, int* b);

// Depth 500
bool IntRef__GT_(int* a, int* b);

// Depth 1000

// Depth 500
bool Long__DIV__EQ_(long x, long y);

// Depth 500
bool Long_even_QMARK_(long a);

// Depth 500
bool Long_odd_QMARK_(long a);

// Depth 500
String Long_prn(long x);

// Depth 1000

// Depth 500
bool LongRef__LT_(long* a, long* b);

// Depth 500
bool LongRef__EQ_(long* a, long* b);

// Depth 500
bool LongRef__GT_(long* a, long* b);

// Depth 1000

// Depth 500
Obj Obj_copy(Obj* pRef);

// Depth 500
void Obj_delete(Obj p);

// Depth 500
float* Obj_dir(Obj* p);

// Depth 500
void Obj_draw(SDL_Renderer* rend, Obj* o);

// Depth 500
Obj Obj_init(Vec2 pos, float radius, float dir, float speed, Fn__Art_MUL__SDL_Texture_MUL__MUL_ sprite);

// Depth 500
Vec2* Obj_pos(Obj* p);

// Depth 500
String Obj_prn(Obj *p);

// Depth 500
float* Obj_radius(Obj* p);

// Depth 500
Obj Obj_set_MINUS_dir(Obj p, float newValue);

// Depth 500
void Obj_set_MINUS_dir_BANG_(Obj* pRef, float newValue);

// Depth 500
Obj Obj_set_MINUS_pos(Obj p, Vec2 newValue);

// Depth 500
void Obj_set_MINUS_pos_BANG_(Obj* pRef, Vec2 newValue);

// Depth 500
Obj Obj_set_MINUS_radius(Obj p, float newValue);

// Depth 500
void Obj_set_MINUS_radius_BANG_(Obj* pRef, float newValue);

// Depth 500
Obj Obj_set_MINUS_speed(Obj p, float newValue);

// Depth 500
void Obj_set_MINUS_speed_BANG_(Obj* pRef, float newValue);

// Depth 500
Obj Obj_set_MINUS_sprite(Obj p, Fn__Art_MUL__SDL_Texture_MUL__MUL_ newValue);

// Depth 500
void Obj_set_MINUS_sprite_BANG_(Obj* pRef, Fn__Art_MUL__SDL_Texture_MUL__MUL_ newValue);

// Depth 500
float* Obj_speed(Obj* p);

// Depth 500
Fn__Art_MUL__SDL_Texture_MUL__MUL_* Obj_sprite(Obj* p);

// Depth 500
String Obj_str(Obj *p);

// Depth 500
Obj Obj_tick(Obj o);

// Depth 500
Obj Obj_update_MINUS_dir(Obj p, Fn__float_float updater);

// Depth 500
Obj Obj_update_MINUS_pos(Obj p, Fn__Vec2_Vec2 updater);

// Depth 500
Obj Obj_update_MINUS_radius(Obj p, Fn__float_float updater);

// Depth 500
Obj Obj_update_MINUS_speed(Obj p, Fn__float_float updater);

// Depth 500
Obj Obj_update_MINUS_sprite(Obj p, Fn__Fn__Art_MUL__SDL_Texture_MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_ updater);

// Depth 1000

// Depth 500
Pattern Pattern_from_MINUS_chars(Array__char* chars);

// Depth 500
bool Pattern_matches_QMARK_(Pattern* pat, String* s);

// Depth 1000

// Depth 500
SDL_Renderer* Pointer_copy__SDL_Renderer (SDL_Renderer** ptrRef);

// Depth 500
SDL_Texture* Pointer_copy__SDL_Texture (SDL_Texture** ptrRef);

// Depth 500
SDL_Window* Pointer_copy__SDL_Window (SDL_Window** ptrRef);

// Depth 1000

// Depth 500
bool RefBool__EQ_(bool* a, bool* b);

// Depth 1000

// Depth 500
void SDL_bg(SDL_Renderer* rend, SDL_Color* color);

// Depth 500
SDL_Rect SDL_dimensions(SDL_Texture* texture);

// Depth 500
void SDL_draw_MINUS_texture(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point);

// Depth 500
void SDL_draw_MINUS_texture_MINUS_centered(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point);

// Depth 1000

// Depth 500
Array__SDL_Event SDL_Event_all();

// Depth 1000

// Depth 500
bool SDL_Keycode__DIV__EQ_(SDL_Keycode x, SDL_Keycode y);

// Depth 500
String SDL_Keycode_prn(SDL_Keycode x);

// Depth 1000

// Depth 500
MouseState SDL_MouseState_copy(MouseState* pRef);

// Depth 500
void SDL_MouseState_delete(MouseState p);

// Depth 500
MouseState SDL_MouseState_get();

// Depth 500
MouseState SDL_MouseState_init(int x, int y, bool left, bool right);

// Depth 500
bool* SDL_MouseState_left(MouseState* p);

// Depth 500
String SDL_MouseState_prn(MouseState *p);

// Depth 500
bool* SDL_MouseState_right(MouseState* p);

// Depth 500
MouseState SDL_MouseState_set_MINUS_left(MouseState p, bool newValue);

// Depth 500
void SDL_MouseState_set_MINUS_left_BANG_(MouseState* pRef, bool newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_right(MouseState p, bool newValue);

// Depth 500
void SDL_MouseState_set_MINUS_right_BANG_(MouseState* pRef, bool newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_x(MouseState p, int newValue);

// Depth 500
void SDL_MouseState_set_MINUS_x_BANG_(MouseState* pRef, int newValue);

// Depth 500
MouseState SDL_MouseState_set_MINUS_y(MouseState p, int newValue);

// Depth 500
void SDL_MouseState_set_MINUS_y_BANG_(MouseState* pRef, int newValue);

// Depth 500
String SDL_MouseState_str(MouseState *p);

// Depth 500
MouseState SDL_MouseState_update_MINUS_left(MouseState p, Fn__bool_bool updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_right(MouseState p, Fn__bool_bool updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_x(MouseState p, Fn__int_int updater);

// Depth 500
MouseState SDL_MouseState_update_MINUS_y(MouseState p, Fn__int_int updater);

// Depth 500
int* SDL_MouseState_x(MouseState* p);

// Depth 500
int* SDL_MouseState_y(MouseState* p);

// Depth 1000

// Depth 500
SDLApp SDLApp_copy(SDLApp* pRef);

// Depth 500
SDLApp SDLApp_create(String* title, int width, int height);

// Depth 500
void SDLApp_delete(SDLApp p);

// Depth 500
int* SDLApp_fps(SDLApp* p);

// Depth 500
SDLApp SDLApp_init(SDL_Window* window, SDL_Renderer* renderer, int fps);

// Depth 500
String SDLApp_prn(SDLApp *p);

// Depth 500
void SDLApp_quit_MINUS_on_MINUS_esc(SDLApp* app);

// Depth 500
SDL_Renderer** SDLApp_renderer(SDLApp* p);

// Depth 500
void SDLApp_run_MINUS_with_MINUS_callbacks__GameState(SDLApp* app, Fn__SDLApp_MUL__void event_MINUS_fn, Fn__GameState_GameState update_MINUS_fn, Fn__SDLApp_MUL__SDL_Renderer_MUL__GameState_MUL__void draw_MINUS_fn, GameState initial_MINUS_state);

// Depth 500
SDLApp SDLApp_set_MINUS_fps(SDLApp p, int newValue);

// Depth 500
void SDLApp_set_MINUS_fps_BANG_(SDLApp* pRef, int newValue);

// Depth 500
SDLApp SDLApp_set_MINUS_renderer(SDLApp p, SDL_Renderer* newValue);

// Depth 500
void SDLApp_set_MINUS_renderer_BANG_(SDLApp* pRef, SDL_Renderer* newValue);

// Depth 500
SDLApp SDLApp_set_MINUS_window(SDLApp p, SDL_Window* newValue);

// Depth 500
void SDLApp_set_MINUS_window_BANG_(SDLApp* pRef, SDL_Window* newValue);

// Depth 500
void SDLApp_stop__void(SDLApp* app);

// Depth 500
String SDLApp_str(SDLApp *p);

// Depth 500
SDLApp SDLApp_update_MINUS_fps(SDLApp p, Fn__int_int updater);

// Depth 500
SDLApp SDLApp_update_MINUS_renderer(SDLApp p, Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_ updater);

// Depth 500
SDLApp SDLApp_update_MINUS_window(SDLApp p, Fn__SDL_Window_MUL__SDL_Window_MUL_ updater);

// Depth 500
SDL_Window** SDLApp_window(SDLApp* p);

// Depth 1000

// Depth 500
SDL_Point SDL_Point_init(int x, int y);

// Depth 500
String SDL_Point_prn(SDL_Point *p);

// Depth 500
SDL_Point SDL_Point_set_MINUS_x(SDL_Point p, int newValue);

// Depth 500
void SDL_Point_set_MINUS_x_BANG_(SDL_Point* pRef, int newValue);

// Depth 500
SDL_Point SDL_Point_set_MINUS_y(SDL_Point p, int newValue);

// Depth 500
void SDL_Point_set_MINUS_y_BANG_(SDL_Point* pRef, int newValue);

// Depth 500
String SDL_Point_str(SDL_Point *p);

// Depth 500
SDL_Point SDL_Point_update_MINUS_x(SDL_Point p, Fn__int_int updater);

// Depth 500
SDL_Point SDL_Point_update_MINUS_y(SDL_Point p, Fn__int_int updater);

// Depth 500
int* SDL_Point_x(SDL_Point* p);

// Depth 500
int* SDL_Point_y(SDL_Point* p);

// Depth 1000

// Depth 500
int* SDL_Rect_h(SDL_Rect* p);

// Depth 500
SDL_Rect SDL_Rect_init(int x, int y, int w, int h);

// Depth 500
String SDL_Rect_prn(SDL_Rect *p);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_h(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_h_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_w(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_w_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_x(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_x_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
SDL_Rect SDL_Rect_set_MINUS_y(SDL_Rect p, int newValue);

// Depth 500
void SDL_Rect_set_MINUS_y_BANG_(SDL_Rect* pRef, int newValue);

// Depth 500
String SDL_Rect_str(SDL_Rect *p);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_h(SDL_Rect p, Fn__int_int updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_w(SDL_Rect p, Fn__int_int updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_x(SDL_Rect p, Fn__int_int updater);

// Depth 500
SDL_Rect SDL_Rect_update_MINUS_y(SDL_Rect p, Fn__int_int updater);

// Depth 500
int* SDL_Rect_w(SDL_Rect* p);

// Depth 500
int* SDL_Rect_x(SDL_Rect* p);

// Depth 500
int* SDL_Rect_y(SDL_Rect* p);

// Depth 1000

// Depth 500
bool* Shot_alive(Shot* p);

// Depth 500
Shot Shot_copy(Shot* pRef);

// Depth 500
void Shot_delete(Shot p);

// Depth 500
Shot Shot_init(int obj_MINUS_index, bool alive);

// Depth 500
int* Shot_obj_MINUS_index(Shot* p);

// Depth 500
String Shot_prn(Shot *p);

// Depth 500
Shot Shot_set_MINUS_alive(Shot p, bool newValue);

// Depth 500
void Shot_set_MINUS_alive_BANG_(Shot* pRef, bool newValue);

// Depth 500
Shot Shot_set_MINUS_obj_MINUS_index(Shot p, int newValue);

// Depth 500
void Shot_set_MINUS_obj_MINUS_index_BANG_(Shot* pRef, int newValue);

// Depth 500
String Shot_str(Shot *p);

// Depth 500
Shot Shot_update_MINUS_alive(Shot p, Fn__bool_bool updater);

// Depth 500
Shot Shot_update_MINUS_obj_MINUS_index(Shot p, Fn__int_int updater);

// Depth 1000

// Depth 500
float* Smoke_age(Smoke* p);

// Depth 500
Smoke Smoke_copy(Smoke* pRef);

// Depth 500
void Smoke_delete(Smoke p);

// Depth 500
void Smoke_draw(SDL_Renderer* rend, Smoke* s);

// Depth 500
Smoke Smoke_init(Vec2 pos, float age);

// Depth 500
Vec2* Smoke_pos(Smoke* p);

// Depth 500
String Smoke_prn(Smoke *p);

// Depth 500
Smoke Smoke_set_MINUS_age(Smoke p, float newValue);

// Depth 500
void Smoke_set_MINUS_age_BANG_(Smoke* pRef, float newValue);

// Depth 500
Smoke Smoke_set_MINUS_pos(Smoke p, Vec2 newValue);

// Depth 500
void Smoke_set_MINUS_pos_BANG_(Smoke* pRef, Vec2 newValue);

// Depth 500
String Smoke_str(Smoke *p);

// Depth 500
void Smoke_tick_BANG_(Smoke* s);

// Depth 500
Smoke Smoke_update_MINUS_age(Smoke p, Fn__float_float updater);

// Depth 500
Smoke Smoke_update_MINUS_pos(Smoke p, Fn__Vec2_Vec2 updater);

// Depth 1000

// Depth 500
bool String__DIV__EQ_(String* a, String* b);

// Depth 500
bool String_alpha_QMARK_(String* s);

// Depth 500
bool String_alphanum_QMARK_(String* s);

// Depth 500
String String_chomp(String* s);

// Depth 500
String String_collapse_MINUS_whitespace(String* s);

// Depth 500
int String_count_MINUS_char(String* s, char c);

// Depth 500
bool String_empty_QMARK_(String* s);

// Depth 500
bool String_ends_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
char String_head(String* s);

// Depth 500
bool String_hex_QMARK_(String* s);

// Depth 500
bool String_in_QMARK_(String* s, String* sub);

// Depth 500
String String_join(Array__String* strings);

// Depth 500
Array__String String_lines(String* s);

// Depth 500
bool String_lower_QMARK_(String* s);

// Depth 500
bool String_num_QMARK_(String* s);

// Depth 500
String String_pad_MINUS_left(int len, char pad, String* s);

// Depth 500
String String_pad_MINUS_right(int len, char pad, String* s);

// Depth 500
String String_prefix_MINUS_string(String* s, int a);

// Depth 500
String String_random_MINUS_sized(int n);

// Depth 500
String String_repeat(int n, String* inpt);

// Depth 500
String String_reverse(String* s);

// Depth 500
Array__String String_split_MINUS_by(String* _s, Array__char* separators);

// Depth 500
bool String_starts_MINUS_with_QMARK_(String* s, String* sub);

// Depth 500
String String_substring(String* s, int a, int b);

// Depth 500
String String_suffix_MINUS_string(String* s, int b);

// Depth 500
String String_trim(String* s);

// Depth 500
String String_trim_MINUS_left(String* s);

// Depth 500
String String_trim_MINUS_right(String* s);

// Depth 500
bool String_upper_QMARK_(String* s);

// Depth 500
Array__String String_words(String* s);

// Depth 500
String String_zero();

// Depth 1000

// Depth 500
bool StringCopy__DIV__EQ_(String a, String b);

// Depth 500
bool StringCopy__EQ_(String a, String b);

// Depth 1000

// Depth 500
void System_exit__void (int code);

// Depth 1000

// Depth 500
Vec2 Vec2_add(Vec2* a, Vec2* b);

// Depth 500
Vec2 Vec2_copy(Vec2* pRef);

// Depth 500
void Vec2_delete(Vec2 p);

// Depth 500
Vec2 Vec2_init(float x, float y);

// Depth 500
String Vec2_prn(Vec2 *p);

// Depth 500
Vec2 Vec2_set_MINUS_x(Vec2 p, float newValue);

// Depth 500
void Vec2_set_MINUS_x_BANG_(Vec2* pRef, float newValue);

// Depth 500
Vec2 Vec2_set_MINUS_y(Vec2 p, float newValue);

// Depth 500
void Vec2_set_MINUS_y_BANG_(Vec2* pRef, float newValue);

// Depth 500
String Vec2_str(Vec2 *p);

// Depth 500
Vec2 Vec2_update_MINUS_x(Vec2 p, Fn__float_float updater);

// Depth 500
Vec2 Vec2_update_MINUS_y(Vec2 p, Fn__float_float updater);

// Depth 500
float* Vec2_x(Vec2* p);

// Depth 500
float* Vec2_y(Vec2* p);


//Init globals:
void carp_init_globals(int argc, char** argv) {
  System_args.len = argc;
  System_args.data = argv;

    // Depth 0
    {
        Double_e = 2.718281828459045;
    }

    // Depth 0
    {
        Double_pi = 3.141592653589793;
    }

    // Depth 0
    {
        Float_pi = 3.1415926536f;
    }

    // Depth 0
    {
        screen_MINUS_height = 1000;
    }

    // Depth 0
    {
        screen_MINUS_width = 2000;
    }

    // Depth 0
    {
        team_MINUS_alien = 0;
    }

    // Depth 0
    {
        team_MINUS_human = 1;
    }

    // Depth 1
    {
        Art _9 = Art_init(NULL, NULL, NULL, NULL, NULL, NULL);
        art = _9;
    }

    // Depth 2
    {
        Vec2 _9 = Vec2_init(0.0f, 0.0f);
        Smoke _11 = Smoke_init(_9, 1.0f);
        Smoke* _12 = &_11; // ref
        Array__Smoke _13 = Array_replicate__Smoke(1000, _12);
        smokes = _13;
        Smoke_delete(_11);
    }
}

//Definitions:
bool _LT__EQ___float(float a, float b) {
    bool _14 = false;
    bool _9 = Float__LT_(a, b);
    if(_9) {
        _14 = true;
    } else {
        bool _13 = Float__EQ_(a, b);
        _14 = _13;
    }
    return _14;
}

bool _LT__EQ___int(int a, int b) {
    bool _14 = false;
    bool _9 = Int__LT_(a, b);
    if(_9) {
        _14 = true;
    } else {
        bool _13 = Int__EQ_(a, b);
        _14 = _13;
    }
    return _14;
}

bool _GT__EQ___int(int a, int b) {
    bool _14 = false;
    bool _9 = Int__GT_(a, b);
    if(_9) {
        _14 = true;
    } else {
        bool _13 = Int__EQ_(a, b);
        _14 = _13;
    }
    return _14;
}

Array Array_allocate__Obj (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Obj));
    return a;
}

Array Array_allocate__Shot (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Shot));
    return a;
}

Array Array_allocate__Smoke (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(Smoke));
    return a;
}

Array Array_allocate__String (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(String));
    return a;
}

Array Array_allocate__char (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(char));
    return a;
}

Array Array_allocate__int (int n) {
    Array a;
    a.len = n;
    a.capacity = n;
    a.data = CARP_MALLOC(n*sizeof(int));
    return a;
}

void Array_aset_BANG___char (Array *aRef, int n, char newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    /* Ignore non-managed type inside Array: 'Char' */

    ((char*)a.data)[n] = newValue;
}

void Array_aset_BANG___int (Array *aRef, int n, int newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    /* Ignore non-managed type inside Array: 'Int' */

    ((int*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Obj (Array *aRef, int n, Obj newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((Obj*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Shot (Array *aRef, int n, Shot newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((Shot*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___Smoke (Array *aRef, int n, Smoke newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((Smoke*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___String (Array *aRef, int n, String newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((String*)a.data)[n] = newValue;
}

void Array_aset_MINUS_uninitialized_BANG___char (Array *aRef, int n, char newValue) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    ((char*)a.data)[n] = newValue;
}

Array__Obj Array_concat__Obj(Array__Array__Obj* xs) {
    Array__Obj _79;
    /* let */ {
        Array _6 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(Obj) * 0) };
        Array__Obj result = _6;
        int _10 = Array_count__Array__Obj(xs);
        int len = _10;
        /* let */ {
            int i = 0;
            bool _21 = Int__LT_(i, len);
            bool _75 = _21;
            while (_75) {
                /* let */ {
                    Array__Obj* _28 = Array_nth__Array__Obj(xs, i);
                    Array__Obj* ys = _28;
                    int _32 = Array_count__Obj(ys);
                    int inner_MINUS_len = _32;
                    /* let */ {
                        int j = 0;
                        bool _42 = Int__LT_(j, inner_MINUS_len);
                        bool _64 = _42;
                        while (_64) {
                            Obj* _52 = Array_nth__Obj(ys, j);
                            Obj _53 = Obj_copy(_52);
                            Array__Obj _54 = Array_push_MINUS_back__Obj(result, _53);
                            result = _54;  // (Array Obj) = (Array Obj)
                            int _61 = Int__PLUS_(j, 1);
                            j = _61;  // Int = Int
                            bool _42 = Int__LT_(j, inner_MINUS_len);
                            _64 = _42;
                        }
                    }
                }
                int _72 = Int__PLUS_(i, 1);
                i = _72;  // Int = Int
                bool _21 = Int__LT_(i, len);
                _75 = _21;
            }
        }
        Array__Obj _78 = result;
        _79 = _78;
    }
    return _79;
}

Array__String Array_copy_MINUS_map__String_String(Fn__String_MUL__String f, Array__String* a) {
    Array__String _50;
    /* let */ {
        int _10 = Array_count__String(a);
        Array__String _11 = Array_allocate__String(_10);
        Array__String na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_count__String(a);
            bool _24 = Int__LT_(i, _23);
            bool _46 = _24;
            while (_46) {
                Array__String* _29 = &na; // ref
                String* _35 = Array_nth__String(a, i);
                String _36 = f(_35);
                Array_aset_MINUS_uninitialized_BANG___String(_29, i, _36);
                int _43 = Int__PLUS_(i, 1);
                i = _43;  // Int = Int
                int _23 = Array_count__String(a);
                bool _24 = Int__LT_(i, _23);
                _46 = _24;
            }
        }
        Array__String _49 = na;
        _50 = _49;
    }
    return _50;
}

Array__Shot Array_copy_MINUS_map__int_Shot(Fn__int_MUL__Shot f, Array__int* a) {
    Array__Shot _50;
    /* let */ {
        int _10 = Array_count__int(a);
        Array__Shot _11 = Array_allocate__Shot(_10);
        Array__Shot na = _11;
        /* let */ {
            int i = 0;
            int _23 = Array_count__int(a);
            bool _24 = Int__LT_(i, _23);
            bool _46 = _24;
            while (_46) {
                Array__Shot* _29 = &na; // ref
                int* _35 = Array_nth__int(a, i);
                Shot _36 = f(_35);
                Array_aset_MINUS_uninitialized_BANG___Shot(_29, i, _36);
                int _43 = Int__PLUS_(i, 1);
                i = _43;  // Int = Int
                int _23 = Array_count__int(a);
                bool _24 = Int__LT_(i, _23);
                _46 = _24;
            }
        }
        Array__Shot _49 = na;
        _50 = _49;
    }
    return _50;
}

Array Array_copy__Obj (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Obj) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Obj*)(copy.data))[i] = Obj_copy(&(((Obj*)a->data)[i]));
    }
    return copy;
}

Array Array_copy__Shot (Array* a){
    Array copy;
    copy.len = a->len;
    copy.capacity = a->capacity;
    copy.data = CARP_MALLOC(sizeof(Shot) * a->capacity);
    for(int i = 0; i < a->len; i++) {
        ((Shot*)(copy.data))[i] = Shot_copy(&(((Shot*)a->data)[i]));
    }
    return copy;
}

int Array_count__Array__Obj (Array *a) { return (*a).len; }
int Array_count__Obj (Array *a) { return (*a).len; }
int Array_count__SDL_Event (Array *a) { return (*a).len; }
int Array_count__Shot (Array *a) { return (*a).len; }
int Array_count__Smoke (Array *a) { return (*a).len; }
int Array_count__String (Array *a) { return (*a).len; }
int Array_count__char (Array *a) { return (*a).len; }
int Array_count__int (Array *a) { return (*a).len; }
void Array_delete__Array__Obj (Array a){
    for(int i = 0; i < a.len; i++) {
        Array_delete__Obj(((Array__Obj*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Obj (Array a){
    for(int i = 0; i < a.len; i++) {
        Obj_delete(((Obj*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__SDL_Event (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'SDL_Event' */
    }
    CARP_FREE(a.data);
}

void Array_delete__Shot (Array a){
    for(int i = 0; i < a.len; i++) {
        Shot_delete(((Shot*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__Smoke (Array a){
    for(int i = 0; i < a.len; i++) {
        Smoke_delete(((Smoke*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__String (Array a){
    for(int i = 0; i < a.len; i++) {
        String_delete(((String*)a.data)[i]);
    }
    CARP_FREE(a.data);
}

void Array_delete__char (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Char' */
    }
    CARP_FREE(a.data);
}

void Array_delete__int (Array a){
    for(int i = 0; i < a.len; i++) {
        /* Ignore non-managed type inside Array: 'Int' */
    }
    CARP_FREE(a.data);
}

Array Array_endo_MINUS_map__Obj(Fn__Obj_Obj f, Array a) { 
    for(int i = 0; i < a.len; ++i) {
        ((Obj*)a.data)[i] = f(((Obj*)a.data)[i]); 
    }
    return a;
}

Array__Obj* Array_nth__Array__Obj (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((Array__Obj*)a.data)[n]);
}

Obj* Array_nth__Obj (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((Obj*)a.data)[n]);
}

SDL_Event* Array_nth__SDL_Event (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((SDL_Event*)a.data)[n]);
}

Shot* Array_nth__Shot (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((Shot*)a.data)[n]);
}

Smoke* Array_nth__Smoke (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((Smoke*)a.data)[n]);
}

String* Array_nth__String (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((String*)a.data)[n]);
}

char* Array_nth__char (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((char*)a.data)[n]);
}

int* Array_nth__int (Array *aRef, int n) {
    Array a = *aRef;
    #ifndef OPTIMIZE
    assert(n >= 0);
    assert(n < a.len);
    #endif
    return &(((int*)a.data)[n]);
}

Array__String Array_prefix_MINUS_array__String(Array__String* xs, int end_MINUS_index) {
    Array__String _9 = Array_subarray__String(xs, 0, end_MINUS_index);
    return _9;
}

Array__char Array_prefix_MINUS_array__char(Array__char* xs, int end_MINUS_index) {
    Array__char _9 = Array_subarray__char(xs, 0, end_MINUS_index);
    return _9;
}

String Array_prn__Obj(Array__Obj* x) {
    String _6 = Array_str__Obj(x);
    return _6;
}

String Array_prn__Shot(Array__Shot* x) {
    String _6 = Array_str__Shot(x);
    return _6;
}

Array Array_push_MINUS_back__Obj(Array a, Obj value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(Obj) * a.capacity);
    }
    ((Obj*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__SDL_Event(Array a, SDL_Event value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(SDL_Event) * a.capacity);
    }
    ((SDL_Event*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__String(Array a, String value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(String) * a.capacity);
    }
    ((String*)a.data)[a.len - 1] = value;
    return a;
}

Array Array_push_MINUS_back__char(Array a, char value) { 
    a.len++;
    if(a.len > a.capacity) {
        a.capacity = a.len * 2;
        a.data = realloc(a.data, sizeof(char) * a.capacity);
    }
    ((char*)a.data)[a.len - 1] = value;
    return a;
}

Array__int Array_range(int start, int end, int step) {
    Array__int _70;
    /* let */ {
        int _15 = Int__MINUS_(end, start);
        int _17 = Int__DIV_(_15, step);
        int _18 = Int_abs(_17);
        int _19 = Int_inc(_18);
        Array__int _20 = Array_allocate__int(_19);
        Array__int x = _20;
        int e = start;
        int i = 0;
        Fn__int_int_bool _37;
        bool _30 = Int__LT_(start, end);
        if (_30) {
            Fn__int_int_bool _33 = _LT__EQ___int;
            _37 = _33;
        } else {
            Fn__int_int_bool _36 = _GT__EQ___int;
            _37 = _36;
        }
        Fn__int_int_bool op = _37;
        bool _44 = op(e, end);
        bool _67 = _44;
        while (_67) {
            Array__int* _49 = &x; // ref
            Array_aset_BANG___int(_49, i, e);
            int _57 = Int_inc(i);
            i = _57;  // Int = Int
            int _64 = Int__PLUS_(e, step);
            e = _64;  // Int = Int
            bool _44 = op(e, end);
            _67 = _44;
        }
        Array__int _69 = x;
        _70 = _69;
    }
    return _70;
}

Array__Obj Array_repeat__Obj(int n, Fn___Obj f) {
    Array__Obj _42;
    /* let */ {
        Array__Obj _9 = Array_allocate__Obj(n);
        Array__Obj a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _38 = _20;
            while (_38) {
                Array__Obj* _25 = &a; // ref
                Obj _28 = f();
                Array_aset_MINUS_uninitialized_BANG___Obj(_25, i, _28);
                int _35 = Int__PLUS_(i, 1);
                i = _35;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _38 = _20;
            }
        }
        Array__Obj _41 = a;
        _42 = _41;
    }
    return _42;
}

Array__char Array_repeat__char(int n, Fn___char f) {
    Array__char _42;
    /* let */ {
        Array__char _9 = Array_allocate__char(n);
        Array__char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _38 = _20;
            while (_38) {
                Array__char* _25 = &a; // ref
                char _28 = f();
                Array_aset_MINUS_uninitialized_BANG___char(_25, i, _28);
                int _35 = Int__PLUS_(i, 1);
                i = _35;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _38 = _20;
            }
        }
        Array__char _41 = a;
        _42 = _41;
    }
    return _42;
}

Array__Smoke Array_replicate__Smoke(int n, Smoke* e) {
    Array__Smoke _43;
    /* let */ {
        Array__Smoke _9 = Array_allocate__Smoke(n);
        Array__Smoke a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__Smoke* _25 = &a; // ref
                Smoke _29 = Smoke_copy(e);
                Array_aset_MINUS_uninitialized_BANG___Smoke(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__Smoke _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__char Array_replicate__char(int n, char* e) {
    Array__char _43;
    /* let */ {
        Array__char _9 = Array_allocate__char(n);
        Array__char a = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                Array__char* _25 = &a; // ref
                char _29 = Char_copy(e);
                Array_aset_MINUS_uninitialized_BANG___char(_25, i, _29);
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        Array__char _42 = a;
        _43 = _42;
    }
    return _43;
}

Array__char Array_reverse__char(Array__char a) {
    Array__char _72;
    /* let */ {
        int i = 0;
        Array__char* _12 = &a; // ref
        int _13 = Array_count__char(_12);
        int _14 = Int_dec(_13);
        int j = _14;
        bool _21 = Int__LT_(i, j);
        bool _69 = _21;
        while (_69) {
            /* let */ {
                Array__char* _28 = &a; // ref
                char* _30 = Array_nth__char(_28, i);
                char _31 = Char_copy(_30);
                char tmp = _31;
                Array__char* _37 = &a; // ref
                Array__char* _43 = &a; // ref
                char* _45 = Array_nth__char(_43, j);
                char _46 = Char_copy(_45);
                Array_aset_BANG___char(_37, i, _46);
                int _52 = Int_inc(i);
                i = _52;  // Int = Int
                Array__char* _57 = &a; // ref
                Array_aset_BANG___char(_57, j, tmp);
                int _65 = Int_dec(j);
                j = _65;  // Int = Int
            }
            bool _21 = Int__LT_(i, j);
            _69 = _21;
        }
        Array__char _71 = a;
        _72 = _71;
    }
    return _72;
}

String Array_str__Obj (Array* a) {
  String temp = NULL;
  int size = 3; // opening and closing brackets and terminator
  for(int i = 0; i < a->len; i++) {
    temp = Obj_prn(&((Obj*)a->data)[i]);
    size += snprintf(NULL, 0, "%s ", temp);
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(buffer, size, "[");
  bufferPtr += 1;

  for(int i = 0; i < a->len; i++) {
    temp = Obj_prn(&((Obj*)a->data)[i]);
    snprintf(bufferPtr, size, "%s ", temp);
    bufferPtr += strlen(temp) + 1;
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  if(a->len > 0) { bufferPtr -= 1; }
  snprintf(bufferPtr, size, "]");
  return buffer;
}

String Array_str__Shot (Array* a) {
  String temp = NULL;
  int size = 3; // opening and closing brackets and terminator
  for(int i = 0; i < a->len; i++) {
    temp = Shot_prn(&((Shot*)a->data)[i]);
    size += snprintf(NULL, 0, "%s ", temp);
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(buffer, size, "[");
  bufferPtr += 1;

  for(int i = 0; i < a->len; i++) {
    temp = Shot_prn(&((Shot*)a->data)[i]);
    snprintf(bufferPtr, size, "%s ", temp);
    bufferPtr += strlen(temp) + 1;
    if(temp) {
      CARP_FREE(temp);
      temp = NULL;
    }
  }

  if(a->len > 0) { bufferPtr -= 1; }
  snprintf(bufferPtr, size, "]");
  return buffer;
}

Array__String Array_subarray__String(Array__String* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__String _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                String* _29 = Array_nth__String(xs, i);
                String _30 = String_copy(_29);
                Array__String _31 = Array_push_MINUS_back__String(result, _30);
                result = _31;  // (Array String) = (Array String)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__String _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__char Array_subarray__char(Array__char* xs, int start_MINUS_index, int end_MINUS_index) {
    Array__char _45;
    /* let */ {
        Array _8 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(char) * 0) };
        Array__char result = _8;
        /* let */ {
            int i = start_MINUS_index;
            bool _19 = Int__LT_(i, end_MINUS_index);
            bool _41 = _19;
            while (_41) {
                char* _29 = Array_nth__char(xs, i);
                char _30 = Char_copy(_29);
                Array__char _31 = Array_push_MINUS_back__char(result, _30);
                result = _31;  // (Array Char) = (Array Char)
                int _38 = Int__PLUS_(i, 1);
                i = _38;  // Int = Int
                bool _19 = Int__LT_(i, end_MINUS_index);
                _41 = _19;
            }
        }
        Array__char _44 = result;
        _45 = _44;
    }
    return _45;
}

Array__char Array_suffix_MINUS_array__char(Array__char* xs, int start_MINUS_index) {
    int _10 = Array_count__char(xs);
    Array__char _11 = Array_subarray__char(xs, start_MINUS_index, _10);
    return _11;
}

Art Art_copy(Art* pRef) {
    Art copy = *pRef;
    /* Ignore non-managed member 'corvette' */
    /* Ignore non-managed member 'slime' */
    /* Ignore non-managed member 'shot' */
    /* Ignore non-managed member 'smoke' */
    /* Ignore non-managed member 'earth' */
    /* Ignore non-managed member 'mothership' */
    return copy;
}

SDL_Texture** Art_corvette(Art* p) { return (&(p->corvette)); }

void Art_delete(Art p) {
    /* Ignore non-managed member 'corvette' */
    /* Ignore non-managed member 'slime' */
    /* Ignore non-managed member 'shot' */
    /* Ignore non-managed member 'smoke' */
    /* Ignore non-managed member 'earth' */
    /* Ignore non-managed member 'mothership' */
}

SDL_Texture** Art_earth(Art* p) { return (&(p->earth)); }

Art Art_init(SDL_Texture* corvette, SDL_Texture* slime, SDL_Texture* shot, SDL_Texture* smoke, SDL_Texture* earth, SDL_Texture* mothership) {
    Art instance;
    instance.corvette = corvette;
    instance.slime = slime;
    instance.shot = shot;
    instance.smoke = smoke;
    instance.earth = earth;
    instance.mothership = mothership;
    return instance;
}

SDL_Texture** Art_mothership(Art* p) { return (&(p->mothership)); }

String Art_prn(Art *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Art");
  size +=  snprintf(NULL, 0, "%p ", p->corvette);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->slime);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->shot);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->smoke);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->earth);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->mothership);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Art");
  bufferPtr += strlen("Art") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->corvette);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->corvette);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->slime);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->slime);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->shot);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->shot);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->smoke);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->smoke);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->earth);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->earth);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->mothership);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->mothership);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Art Art_set_MINUS_corvette(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'corvette' */
    p.corvette = newValue;
    return p;
}


void Art_set_MINUS_corvette_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->corvette = newValue;
}


Art Art_set_MINUS_earth(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'earth' */
    p.earth = newValue;
    return p;
}


void Art_set_MINUS_earth_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->earth = newValue;
}


Art Art_set_MINUS_mothership(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'mothership' */
    p.mothership = newValue;
    return p;
}


void Art_set_MINUS_mothership_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->mothership = newValue;
}


Art Art_set_MINUS_shot(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'shot' */
    p.shot = newValue;
    return p;
}


void Art_set_MINUS_shot_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->shot = newValue;
}


Art Art_set_MINUS_slime(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'slime' */
    p.slime = newValue;
    return p;
}


void Art_set_MINUS_slime_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->slime = newValue;
}


Art Art_set_MINUS_smoke(Art p, SDL_Texture* newValue) {
    /* Ignore non-managed member 'smoke' */
    p.smoke = newValue;
    return p;
}


void Art_set_MINUS_smoke_BANG_(Art* pRef, SDL_Texture* newValue) {
    pRef->smoke = newValue;
}


SDL_Texture** Art_shot(Art* p) { return (&(p->shot)); }

SDL_Texture** Art_slime(Art* p) { return (&(p->slime)); }

SDL_Texture** Art_smoke(Art* p) { return (&(p->smoke)); }

String Art_str(Art *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Art");
  size +=  snprintf(NULL, 0, "%p ", p->corvette);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->slime);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->shot);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->smoke);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->earth);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->mothership);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Art");
  bufferPtr += strlen("Art") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->corvette);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->corvette);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->slime);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->slime);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->shot);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->shot);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->smoke);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->smoke);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->earth);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->earth);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->mothership);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->mothership);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Art Art_update_MINUS_corvette(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater) {
    p.corvette = updater(p.corvette);
    return p;
}


Art Art_update_MINUS_earth(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater) {
    p.earth = updater(p.earth);
    return p;
}


Art Art_update_MINUS_mothership(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater) {
    p.mothership = updater(p.mothership);
    return p;
}


Art Art_update_MINUS_shot(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater) {
    p.shot = updater(p.shot);
    return p;
}


Art Art_update_MINUS_slime(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater) {
    p.slime = updater(p.slime);
    return p;
}


Art Art_update_MINUS_smoke(Art p, Fn__SDL_Texture_MUL__SDL_Texture_MUL_ updater) {
    p.smoke = updater(p.smoke);
    return p;
}


String Bool_prn(bool x) {
    String _6 = Bool_str(x);
    return _6;
}

bool Char__DIV__EQ_(char a, char b) {
    char _10 = a; // From the 'the' function.
    bool _12 = Char__EQ_(_10, b);
    bool _13 = not(_12);
    return _13;
}

int Char_meaning(char* char_MINUS_ref) {
    int _134;
    char _8 = Char_copy(char_MINUS_ref);
    bool _10 = Char__EQ_(_8, '0');
    if (_10) {
        int _13 = 0;
        _134 = _13;
    } else {
        int _132;
        char _19 = Char_copy(char_MINUS_ref);
        bool _21 = Char__EQ_(_19, '1');
        if (_21) {
            int _24 = 1;
            _132 = _24;
        } else {
            int _130;
            char _30 = Char_copy(char_MINUS_ref);
            bool _32 = Char__EQ_(_30, '2');
            if (_32) {
                int _35 = 2;
                _130 = _35;
            } else {
                int _128;
                char _41 = Char_copy(char_MINUS_ref);
                bool _43 = Char__EQ_(_41, '3');
                if (_43) {
                    int _46 = 3;
                    _128 = _46;
                } else {
                    int _126;
                    char _52 = Char_copy(char_MINUS_ref);
                    bool _54 = Char__EQ_(_52, '4');
                    if (_54) {
                        int _57 = 4;
                        _126 = _57;
                    } else {
                        int _124;
                        char _63 = Char_copy(char_MINUS_ref);
                        bool _65 = Char__EQ_(_63, '5');
                        if (_65) {
                            int _68 = 5;
                            _124 = _68;
                        } else {
                            int _122;
                            char _74 = Char_copy(char_MINUS_ref);
                            bool _76 = Char__EQ_(_74, '6');
                            if (_76) {
                                int _79 = 6;
                                _122 = _79;
                            } else {
                                int _120;
                                char _85 = Char_copy(char_MINUS_ref);
                                bool _87 = Char__EQ_(_85, '7');
                                if (_87) {
                                    int _90 = 7;
                                    _120 = _90;
                                } else {
                                    int _118;
                                    char _96 = Char_copy(char_MINUS_ref);
                                    bool _98 = Char__EQ_(_96, '8');
                                    if (_98) {
                                        int _101 = 8;
                                        _118 = _101;
                                    } else {
                                        int _116;
                                        char _107 = Char_copy(char_MINUS_ref);
                                        bool _109 = Char__EQ_(_107, '9');
                                        if (_109) {
                                            int _112 = 9;
                                            _116 = _112;
                                        } else {
                                            int _115 = -1;
                                            _116 = _115;
                                        }
                                        int _117 = _116;
                                        _118 = _117;
                                    }
                                    int _119 = _118;
                                    _120 = _119;
                                }
                                int _121 = _120;
                                _122 = _121;
                            }
                            int _123 = _122;
                            _124 = _123;
                        }
                        int _125 = _124;
                        _126 = _125;
                    }
                    int _127 = _126;
                    _128 = _127;
                }
                int _129 = _128;
                _130 = _129;
            }
            int _131 = _130;
            _132 = _131;
        }
        int _133 = _132;
        _134 = _133;
    }
    return _134;
}

String Char_prn(char x) {
    String _6 = Char_str(x);
    return _6;
}

char Char_random() {
    int _5 = Int_random();
    char _6 = Char_from_MINUS_int(_5);
    return _6;
}

char Char_random_MINUS_between(char a, char b) {
    int _9 = Char_to_MINUS_int(a);
    int _12 = Char_to_MINUS_int(b);
    int _13 = Int_random_MINUS_between(_9, _12);
    char _14 = Char_from_MINUS_int(_13);
    return _14;
}

bool CharRef__EQ_(char* a, char* b) {
    char _8 = Char_copy(a);
    char _11 = Char_copy(b);
    bool _12 = Char__EQ_(_8, _11);
    return _12;
}

bool Double__DIV__EQ_(double x, double y) {
    bool _9 = Double__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

double Double_add_MINUS_ref(double* x, double* y) {
    double _8 = Double_copy(x);
    double _11 = Double_copy(y);
    double _12 = Double__PLUS_(_8, _11);
    return _12;
}

bool Double_approx(double x, double y) {
    bool _28;
    bool _9 = Double__GT_(x, y);
    if (_9) {
        double _15 = Double__MINUS_(x, y);
        bool _17 = Double__LT_(_15, 1.0e-5);
        bool _18 = _17;
        _28 = _18;
    } else {
        double _24 = Double__MINUS_(y, x);
        bool _26 = Double__LT_(_24, 1.0e-5);
        bool _27 = _26;
        _28 = _27;
    }
    return _28;
}

String Double_prn(double x) {
    String _6 = Double_str(x);
    return _6;
}

double Double_zero() {
    return 0.0;
}

bool DoubleRef__LT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__LT_(_8, _11);
    return _12;
}

bool DoubleRef__EQ_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__EQ_(_8, _11);
    return _12;
}

bool DoubleRef__GT_(double* a, double* b) {
    double _8 = Double_copy(a);
    double _11 = Double_copy(b);
    bool _12 = Double__GT_(_8, _11);
    return _12;
}

bool Float__DIV__EQ_(float x, float y) {
    bool _9 = Float__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

float Float_add_MINUS_ref(float* x, float* y) {
    float _8 = Float_copy(x);
    float _11 = Float_copy(y);
    float _12 = Float__PLUS_(_8, _11);
    return _12;
}

bool Float_approx(float x, float y) {
    bool _28;
    bool _9 = Float__GT_(x, y);
    if (_9) {
        float _15 = Float__MINUS_(x, y);
        bool _17 = Float__LT_(_15, 1.0e-5f);
        bool _18 = _17;
        _28 = _18;
    } else {
        float _24 = Float__MINUS_(y, x);
        bool _26 = Float__LT_(_24, 1.0e-5f);
        bool _27 = _26;
        _28 = _27;
    }
    return _28;
}

String Float_prn(float x) {
    String _6 = Float_str(x);
    return _6;
}

float Float_zero() {
    return 0.0f;
}

bool FloatRef__LT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__LT_(_8, _11);
    return _12;
}

bool FloatRef__EQ_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__EQ_(_8, _11);
    return _12;
}

bool FloatRef__GT_(float* a, float* b) {
    float _8 = Float_copy(a);
    float _11 = Float_copy(b);
    bool _12 = Float__GT_(_8, _11);
    return _12;
}

GameState GameState_copy(GameState* pRef) {
    GameState copy = *pRef;
    copy.objs = Array_copy__Obj(&(pRef->objs));
    copy.shots = Array_copy__Shot(&(pRef->shots));
    return copy;
}

void GameState_delete(GameState p) {
    Array_delete__Obj(p.objs);
    Array_delete__Shot(p.shots);
}

GameState GameState_init(Array__Obj objs, Array__Shot shots) {
    GameState instance;
    instance.objs = objs;
    instance.shots = shots;
    return instance;
}

Array__Obj* GameState_objs(GameState* p) { return (&(p->objs)); }

String GameState_prn(GameState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "GameState");
  temp = Array_prn__Obj(&p->objs); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Shot(&p->shots); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "GameState");
  bufferPtr += strlen("GameState") + 2;

  temp = Array_prn__Obj(&p->objs);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Shot(&p->shots);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

GameState GameState_set_MINUS_objs(GameState p, Array__Obj newValue) {
    Array_delete__Obj(p.objs);
    p.objs = newValue;
    return p;
}


void GameState_set_MINUS_objs_BANG_(GameState* pRef, Array__Obj newValue) {
    pRef->objs = newValue;
}


GameState GameState_set_MINUS_shots(GameState p, Array__Shot newValue) {
    Array_delete__Shot(p.shots);
    p.shots = newValue;
    return p;
}


void GameState_set_MINUS_shots_BANG_(GameState* pRef, Array__Shot newValue) {
    pRef->shots = newValue;
}


Array__Shot* GameState_shots(GameState* p) { return (&(p->shots)); }

String GameState_str(GameState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "GameState");
  temp = Array_prn__Obj(&p->objs); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Shot(&p->shots); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "GameState");
  bufferPtr += strlen("GameState") + 2;

  temp = Array_prn__Obj(&p->objs);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Array_prn__Shot(&p->shots);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

GameState GameState_update_MINUS_objs(GameState p, Fn__Array__Obj_Array__Obj updater) {
    p.objs = updater(p.objs);
    return p;
}


GameState GameState_update_MINUS_shots(GameState p, Fn__Array__Shot_Array__Shot updater) {
    p.shots = updater(p.shots);
    return p;
}


double Geometry_degree_MINUS_to_MINUS_radians(double n) {
    double _9 = Double__DIV_(Double_pi, 180.0);
    double _10 = Double__MUL_(n, _9);
    return _10;
}

double Geometry_radians_MINUS_to_MINUS_degree(double n) {
    double _9 = Double__DIV_(180.0, Double_pi);
    double _10 = Double__MUL_(n, _9);
    return _10;
}

String IO_read_MINUS__GT_EOF(String* filename) {
    String _48;
    /* let */ {
        static String _8 = "rb";
        String *_8_ref = &_8;
        FILE* _9 = IO_fopen(filename, _8_ref);
        FILE* f = _9;
        char _13 = Char_from_MINUS_int(0);
        char c = _13;
        Array _15 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(char) * 0) };
        Array__char r = _15;
        char _24 = IO_fgetc(f);
        c = _24;  // Char = Char
        bool _29 = Char__DIV__EQ_(c, IO_EOF);
        bool _30 = _29;
        bool _38 = _30;
        while (_38) {
            Array__char _36 = Array_push_MINUS_back__char(r, c);
            r = _36;  // (Array Char) = (Array Char)
            char _24 = IO_fgetc(f);
            c = _24;  // Char = Char
            bool _29 = Char__DIV__EQ_(c, IO_EOF);
            bool _30 = _29;
            _38 = _30;
        }
        IO_fclose(f);
        Array__char* _45 = &r; // ref
        String _46 = String_from_MINUS_chars(_45);
        String _47 = _46;
        _48 = _47;
        Array_delete__char(r);
    }
    return _48;
}

int Int_add_MINUS_ref(int* x, int* y) {
    int _8 = Int_copy(x);
    int _11 = Int_copy(y);
    int _12 = Int__PLUS_(_8, _11);
    return _12;
}

bool Int_even_QMARK_(int a) {
    int _8 = Int_mod(a, 2);
    bool _10 = Int__EQ_(_8, 0);
    return _10;
}

bool Int_odd_QMARK_(int a) {
    bool _7 = Int_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

int Int_pow(int x, int y) {
    int _55;
    /* let */ {
        int r = 1;
        bool _14 = Int__DIV__EQ_(y, 0);
        bool _52 = _14;
        while (_52) {
            int _21 = Int_bit_MINUS_and(y, 1);
            bool _23 = Int__DIV__EQ_(_21, 0);
            if (_23) {
                int _30 = Int__MUL_(r, x);
                r = _30;  // Int = Int
            } else {
                /* () */
            }
            int _42 = Int__DIV_(y, 2);
            y = _42;  // Int = Int
            int _49 = Int__MUL_(x, x);
            x = _49;  // Int = Int
            bool _14 = Int__DIV__EQ_(y, 0);
            _52 = _14;
        }
        int _54 = r;
        _55 = _54;
    }
    return _55;
}

String Int_prn(int x) {
    String _6 = Int_str(x);
    return _6;
}

int Int_zero() {
    return 0;
}

bool IntRef__LT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__LT_(_8, _11);
    return _12;
}

bool IntRef__EQ_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__EQ_(_8, _11);
    return _12;
}

bool IntRef__GT_(int* a, int* b) {
    int _8 = Int_copy(a);
    int _11 = Int_copy(b);
    bool _12 = Int__GT_(_8, _11);
    return _12;
}

bool Long__DIV__EQ_(long x, long y) {
    bool _9 = Long__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

bool Long_even_QMARK_(long a) {
    long _8 = Long_mod(a, 2l);
    bool _10 = Long__EQ_(_8, 0l);
    return _10;
}

bool Long_odd_QMARK_(long a) {
    bool _7 = Long_even_QMARK_(a);
    bool _8 = not(_7);
    return _8;
}

String Long_prn(long x) {
    String _6 = Long_str(x);
    return _6;
}

bool LongRef__LT_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__LT_(_8, _11);
    return _12;
}

bool LongRef__EQ_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__EQ_(_8, _11);
    return _12;
}

bool LongRef__GT_(long* a, long* b) {
    long _8 = Long_copy(a);
    long _11 = Long_copy(b);
    bool _12 = Long__GT_(_8, _11);
    return _12;
}

Obj Obj_copy(Obj* pRef) {
    Obj copy = *pRef;
    copy.pos = Vec2_copy(&(pRef->pos));
    /* Ignore non-managed member 'radius' */
    /* Ignore non-managed member 'dir' */
    /* Ignore non-managed member 'speed' */
    /* Ignore non-managed member 'sprite' */
    return copy;
}

void Obj_delete(Obj p) {
    Vec2_delete(p.pos);
    /* Ignore non-managed member 'radius' */
    /* Ignore non-managed member 'dir' */
    /* Ignore non-managed member 'speed' */
    /* Ignore non-managed member 'sprite' */
}

float* Obj_dir(Obj* p) { return (&(p->dir)); }

void Obj_draw(SDL_Renderer* rend, Obj* o) {
    /* let */ {
        Fn__Art_MUL__SDL_Texture_MUL__MUL_* _10 = Obj_sprite(o);
        Fn__Art_MUL__SDL_Texture_MUL__MUL_ _11 = copy__Art_MUL__SDL_Texture_MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_(_10);
        Fn__Art_MUL__SDL_Texture_MUL__MUL_ get_MINUS_sprite_MINUS_fn = _11;
        Art* _17 = &art; // ref
        SDL_Texture** _18 = get_MINUS_sprite_MINUS_fn(_17);
        SDL_Texture* _19 = Pointer_copy__SDL_Texture(_18);
        SDL_Texture* img = _19;
        Vec2* _23 = Obj_pos(o);
        Vec2* pos = _23;
        SDL_Rect _27 = SDL_dimensions(img);
        SDL_Rect dims = _27;
        SDL_Rect* _33 = &dims; // ref
        int* _34 = SDL_Rect_w(_33);
        int _35 = Int_copy(_34);
        int w = _35;
        SDL_Rect* _41 = &dims; // ref
        int* _42 = SDL_Rect_h(_41);
        int _43 = Int_copy(_42);
        int h = _43;
        float* _58 = Vec2_x(pos);
        float _59 = Float_copy(_58);
        int _60 = Float_to_MINUS_int(_59);
        int _64 = Int__DIV_(w, 2);
        int _65 = Int__MINUS_(_60, _64);
        float* _71 = Vec2_y(pos);
        float _72 = Float_copy(_71);
        int _73 = Float_to_MINUS_int(_72);
        int _77 = Int__DIV_(h, 2);
        int _78 = Int__MINUS_(_73, _77);
        SDL_Rect _81 = SDL_rect(_65, _78, w, h);
        float* _90 = Obj_dir(o);
        float _91 = Float_copy(_90);
        double _92 = Double_from_MINUS_float(_91);
        double _93 = Geometry_radians_MINUS_to_MINUS_degree(_92);
        double _94 = Double__MINUS_(360.0, _93);
        int _100 = Int__DIV_(w, 2);
        int _104 = Int__DIV_(h, 2);
        SDL_Point _105 = SDL_point(_100, _104);
        SDL_RenderCopyEx(rend, img, &dims, &_81, _94, &_105, SDL_FLIP_NONE);
    }
}

Obj Obj_init(Vec2 pos, float radius, float dir, float speed, Fn__Art_MUL__SDL_Texture_MUL__MUL_ sprite) {
    Obj instance;
    instance.pos = pos;
    instance.radius = radius;
    instance.dir = dir;
    instance.speed = speed;
    instance.sprite = sprite;
    return instance;
}

Vec2* Obj_pos(Obj* p) { return (&(p->pos)); }

String Obj_prn(Obj *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Obj");
  temp = Vec2_prn(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->radius); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->dir); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->speed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = prn__Art_MUL__SDL_Texture_MUL__MUL_(p->sprite); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Obj");
  bufferPtr += strlen("Obj") + 2;

  temp = Vec2_prn(&p->pos);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->radius);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->dir);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->speed);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = prn__Art_MUL__SDL_Texture_MUL__MUL_(p->sprite);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

float* Obj_radius(Obj* p) { return (&(p->radius)); }

Obj Obj_set_MINUS_dir(Obj p, float newValue) {
    /* Ignore non-managed member 'dir' */
    p.dir = newValue;
    return p;
}


void Obj_set_MINUS_dir_BANG_(Obj* pRef, float newValue) {
    pRef->dir = newValue;
}


Obj Obj_set_MINUS_pos(Obj p, Vec2 newValue) {
    Vec2_delete(p.pos);
    p.pos = newValue;
    return p;
}


void Obj_set_MINUS_pos_BANG_(Obj* pRef, Vec2 newValue) {
    pRef->pos = newValue;
}


Obj Obj_set_MINUS_radius(Obj p, float newValue) {
    /* Ignore non-managed member 'radius' */
    p.radius = newValue;
    return p;
}


void Obj_set_MINUS_radius_BANG_(Obj* pRef, float newValue) {
    pRef->radius = newValue;
}


Obj Obj_set_MINUS_speed(Obj p, float newValue) {
    /* Ignore non-managed member 'speed' */
    p.speed = newValue;
    return p;
}


void Obj_set_MINUS_speed_BANG_(Obj* pRef, float newValue) {
    pRef->speed = newValue;
}


Obj Obj_set_MINUS_sprite(Obj p, Fn__Art_MUL__SDL_Texture_MUL__MUL_ newValue) {
    /* Ignore non-managed member 'sprite' */
    p.sprite = newValue;
    return p;
}


void Obj_set_MINUS_sprite_BANG_(Obj* pRef, Fn__Art_MUL__SDL_Texture_MUL__MUL_ newValue) {
    pRef->sprite = newValue;
}


float* Obj_speed(Obj* p) { return (&(p->speed)); }

Fn__Art_MUL__SDL_Texture_MUL__MUL_* Obj_sprite(Obj* p) { return (Fn__Art_MUL__SDL_Texture_MUL__MUL_*)(&(p->sprite)); }

String Obj_str(Obj *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Obj");
  temp = Vec2_prn(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->radius); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->dir); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->speed); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = prn__Art_MUL__SDL_Texture_MUL__MUL_(p->sprite); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Obj");
  bufferPtr += strlen("Obj") + 2;

  temp = Vec2_prn(&p->pos);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->radius);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->dir);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->speed);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = prn__Art_MUL__SDL_Texture_MUL__MUL_(p->sprite);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Obj Obj_tick(Obj o) {
    Obj _59;
    /* let */ {
        Obj* _10 = &o; // ref
        Vec2* _11 = Obj_pos(_10);
        Vec2 _12 = Vec2_copy(_11);
        Vec2 pos = _12;
        Obj* _18 = &o; // ref
        float* _19 = Obj_dir(_18);
        float _20 = Float_copy(_19);
        float dir = _20;
        Obj* _26 = &o; // ref
        float* _27 = Obj_speed(_26);
        float _28 = Float_copy(_27);
        float speed = _28;
        Vec2* _33 = &pos; // ref
        float _40 = Float_cos(dir);
        float _41 = Float__MUL_(speed, _40);
        float _48 = Float_sin(dir);
        float _49 = Float__MUL_(-1.0f, _48);
        float _50 = Float__MUL_(speed, _49);
        Vec2 _51 = Vec2_init(_41, _50);
        Vec2* _52 = &_51; // ref
        Vec2 _53 = Vec2_add(_33, _52);
        Vec2 new_MINUS_pos = _53;
        Obj _58 = Obj_set_MINUS_pos(o, new_MINUS_pos);
        _59 = _58;
        Vec2_delete(_51);
        Vec2_delete(pos);
    }
    return _59;
}

Obj Obj_update_MINUS_dir(Obj p, Fn__float_float updater) {
    p.dir = updater(p.dir);
    return p;
}


Obj Obj_update_MINUS_pos(Obj p, Fn__Vec2_Vec2 updater) {
    p.pos = updater(p.pos);
    return p;
}


Obj Obj_update_MINUS_radius(Obj p, Fn__float_float updater) {
    p.radius = updater(p.radius);
    return p;
}


Obj Obj_update_MINUS_speed(Obj p, Fn__float_float updater) {
    p.speed = updater(p.speed);
    return p;
}


Obj Obj_update_MINUS_sprite(Obj p, Fn__Fn__Art_MUL__SDL_Texture_MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_ updater) {
    p.sprite = updater(p.sprite);
    return p;
}


Pattern Pattern_from_MINUS_chars(Array__char* chars) {
    static String _8 = "[";
    String *_8_ref = &_8;
    String _9 = String_copy(_8_ref);
    String _13 = String_from_MINUS_chars(chars);
    static String _16 = "]";
    String *_16_ref = &_16;
    String _17 = String_copy(_16_ref);
    static String _19 = "";
    String *_19_ref = &_19;
    String _20 = String_copy(_19_ref);
    String _21 = String_append(_17, _20);
    String _22 = String_append(_13, _21);
    String _23 = String_append(_9, _22);
    String* _24 = &_23; // ref
    Pattern _25 = Pattern_init(_24);
    String_delete(_23);
    return _25;
}

bool Pattern_matches_QMARK_(Pattern* pat, String* s) {
    int _9 = Pattern_find(pat, s);
    bool _11 = Int__DIV__EQ_(_9, -1);
    return _11;
}

SDL_Renderer* Pointer_copy__SDL_Renderer (SDL_Renderer** ptrRef) {
    return *ptrRef;
}

SDL_Texture* Pointer_copy__SDL_Texture (SDL_Texture** ptrRef) {
    return *ptrRef;
}

SDL_Window* Pointer_copy__SDL_Window (SDL_Window** ptrRef) {
    return *ptrRef;
}

bool RefBool__EQ_(bool* a, bool* b) {
    bool _8 = Bool_copy(a);
    bool _11 = Bool_copy(b);
    bool _12 = Bool__EQ_(_8, _11);
    return _12;
}

Array__SDL_Event SDL_Event_all() {
    Array__SDL_Event _27;
    /* let */ {
        Array _5 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(SDL_Event) * 0) };
        Array__SDL_Event events = _5;
        SDL_Event _8 = SDL_Event_init();
        SDL_Event e = _8;
        bool _16 = SDL_PollEvent(&e);
        bool _24 = _16;
        while (_24) {
            Array__SDL_Event _22 = Array_push_MINUS_back__SDL_Event(events, e);
            events = _22;  // (Array SDL_Event) = (Array SDL_Event)
            bool _16 = SDL_PollEvent(&e);
            _24 = _16;
        }
        Array__SDL_Event _26 = events;
        _27 = _26;
    }
    return _27;
}

bool SDL_Keycode__DIV__EQ_(SDL_Keycode x, SDL_Keycode y) {
    bool _9 = SDL_Keycode__EQ_(x, y);
    bool _10 = not(_9);
    return _10;
}

String SDL_Keycode_prn(SDL_Keycode x) {
    String _6 = SDL_Keycode_str(x);
    return _6;
}

MouseState SDL_MouseState_copy(MouseState* pRef) {
    MouseState copy = *pRef;
    /* Ignore non-managed member 'x' */
    /* Ignore non-managed member 'y' */
    /* Ignore non-managed member 'left' */
    /* Ignore non-managed member 'right' */
    return copy;
}

void SDL_MouseState_delete(MouseState p) {
    /* Ignore non-managed member 'x' */
    /* Ignore non-managed member 'y' */
    /* Ignore non-managed member 'left' */
    /* Ignore non-managed member 'right' */
}

MouseState SDL_MouseState_get() {
    MouseState _44;
    /* let */ {
        int x = 0;
        int y = 0;
        int _16 = SDL_GetMouseState(&x, &y);
        int state = _16;
        int _24 = SDL_BUTTON(SDL_BUTTON_LEFT);
        int _25 = Int_bit_MINUS_and(state, _24);
        bool _26 = Int__DIV__EQ_(0, _25);
        bool l = _26;
        int _34 = SDL_BUTTON(SDL_BUTTON_RIGHT);
        int _35 = Int_bit_MINUS_and(state, _34);
        bool _36 = Int__DIV__EQ_(0, _35);
        bool r = _36;
        MouseState _43 = SDL_MouseState_init(x, y, l, r);
        _44 = _43;
    }
    return _44;
}

MouseState SDL_MouseState_init(int x, int y, bool left, bool right) {
    MouseState instance;
    instance.x = x;
    instance.y = y;
    instance.left = left;
    instance.right = right;
    return instance;
}

bool* SDL_MouseState_left(MouseState* p) { return (&(p->left)); }

String SDL_MouseState_prn(MouseState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "MouseState");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "MouseState");
  bufferPtr += strlen("MouseState") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

bool* SDL_MouseState_right(MouseState* p) { return (&(p->right)); }

MouseState SDL_MouseState_set_MINUS_left(MouseState p, bool newValue) {
    /* Ignore non-managed member 'left' */
    p.left = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_left_BANG_(MouseState* pRef, bool newValue) {
    pRef->left = newValue;
}


MouseState SDL_MouseState_set_MINUS_right(MouseState p, bool newValue) {
    /* Ignore non-managed member 'right' */
    p.right = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_right_BANG_(MouseState* pRef, bool newValue) {
    pRef->right = newValue;
}


MouseState SDL_MouseState_set_MINUS_x(MouseState p, int newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_x_BANG_(MouseState* pRef, int newValue) {
    pRef->x = newValue;
}


MouseState SDL_MouseState_set_MINUS_y(MouseState p, int newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void SDL_MouseState_set_MINUS_y_BANG_(MouseState* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_MouseState_str(MouseState *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "MouseState");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "MouseState");
  bufferPtr += strlen("MouseState") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->left);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->right);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

MouseState SDL_MouseState_update_MINUS_left(MouseState p, Fn__bool_bool updater) {
    p.left = updater(p.left);
    return p;
}


MouseState SDL_MouseState_update_MINUS_right(MouseState p, Fn__bool_bool updater) {
    p.right = updater(p.right);
    return p;
}


MouseState SDL_MouseState_update_MINUS_x(MouseState p, Fn__int_int updater) {
    p.x = updater(p.x);
    return p;
}


MouseState SDL_MouseState_update_MINUS_y(MouseState p, Fn__int_int updater) {
    p.y = updater(p.y);
    return p;
}


int* SDL_MouseState_x(MouseState* p) { return (&(p->x)); }

int* SDL_MouseState_y(MouseState* p) { return (&(p->y)); }

void SDL_bg(SDL_Renderer* rend, SDL_Color* color) {
    int _12 = SDL_Color_r(color);
    int _15 = SDL_Color_g(color);
    int _18 = SDL_Color_b(color);
    SDL_SetRenderDrawColor(rend, _12, _15, _18, 255);
    SDL_RenderClear(rend);
}

SDL_Rect SDL_dimensions(SDL_Texture* texture) {
    SDL_Rect _29;
    /* let */ {
        int w = 0;
        int h = 0;
        SDL_QueryTexture(texture, NULL, NULL, &w, &h);
        SDL_Rect _27 = SDL_rect(0, 0, w, h);
        SDL_Rect _28 = _27;
        _29 = _28;
    }
    return _29;
}

void SDL_draw_MINUS_texture(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point) {
    /* let */ {
        SDL_Rect _10 = SDL_dimensions(texture);
        SDL_Rect dims = _10;
        int* _16 = SDL_Point_x(point);
        int _17 = Int_copy(_16);
        int* _21 = SDL_Point_y(point);
        int _22 = Int_copy(_21);
        SDL_Rect* _27 = &dims; // ref
        int* _28 = SDL_Rect_w(_27);
        int _29 = Int_copy(_28);
        SDL_Rect* _34 = &dims; // ref
        int* _35 = SDL_Rect_h(_34);
        int _36 = Int_copy(_35);
        SDL_Rect _37 = SDL_rect(_17, _22, _29, _36);
        SDL_Rect dest = _37;
        SDL_RenderCopy(rend, texture, &dims, &dest);
    }
}

void SDL_draw_MINUS_texture_MINUS_centered(SDL_Renderer* rend, SDL_Texture* texture, SDL_Point* point) {
    /* let */ {
        SDL_Rect _10 = SDL_dimensions(texture);
        SDL_Rect dims = _10;
        SDL_Rect* _16 = &dims; // ref
        int* _17 = SDL_Rect_w(_16);
        int _18 = Int_copy(_17);
        int w = _18;
        SDL_Rect* _24 = &dims; // ref
        int* _25 = SDL_Rect_h(_24);
        int _26 = Int_copy(_25);
        int h = _26;
        int* _33 = SDL_Point_x(point);
        int _34 = Int_copy(_33);
        int _38 = Int__DIV_(w, 2);
        int _39 = Int__MINUS_(_34, _38);
        int* _44 = SDL_Point_y(point);
        int _45 = Int_copy(_44);
        int _49 = Int__DIV_(h, 2);
        int _50 = Int__MINUS_(_45, _49);
        SDL_Rect _53 = SDL_rect(_39, _50, w, h);
        SDL_Rect dest = _53;
        SDL_RenderCopy(rend, texture, &dims, &dest);
    }
}

SDLApp SDLApp_copy(SDLApp* pRef) {
    SDLApp copy = *pRef;
    /* Ignore non-managed member 'window' */
    /* Ignore non-managed member 'renderer' */
    /* Ignore non-managed member 'fps' */
    return copy;
}

SDLApp SDLApp_create(String* title, int width, int height) {
    SDLApp _44;
    /* let */ {
        int _ = SDL_INIT_EVERYTHING;
        SDL_Window* win = NULL;
        SDL_Renderer* ren = NULL;
        static String _18 = "1";
        String *_18_ref = &_18;
        char* _19 = String_cstr(_18_ref);
        SDL_SetHint(SDL_HINT_RENDER_VSYNC, _19);
        SDL_CreateWindowAndRenderer(width, height, 0, &win, &ren);
        char* _36 = String_cstr(title);
        SDL_SetWindowTitle(win, _36);
        SDLApp _42 = SDLApp_init(win, ren, 60);
        SDLApp _43 = _42;
        _44 = _43;
    }
    return _44;
}

void SDLApp_delete(SDLApp p) {
    /* Ignore non-managed member 'window' */
    /* Ignore non-managed member 'renderer' */
    /* Ignore non-managed member 'fps' */
}

int* SDLApp_fps(SDLApp* p) { return (&(p->fps)); }

SDLApp SDLApp_init(SDL_Window* window, SDL_Renderer* renderer, int fps) {
    SDLApp instance;
    instance.window = window;
    instance.renderer = renderer;
    instance.fps = fps;
    return instance;
}

String SDLApp_prn(SDLApp *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDLApp");
  size +=  snprintf(NULL, 0, "%p ", p->window);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->renderer);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDLApp");
  bufferPtr += strlen("SDLApp") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->window);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->window);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->renderer);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->renderer);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

void SDLApp_quit_MINUS_on_MINUS_esc(SDLApp* app) {
    /* let */ {
        Array__SDL_Event _8 = SDL_Event_all();
        Array__SDL_Event* _9 = &_8; // ref
        Array__SDL_Event* xs = _9;
        int _13 = Array_count__SDL_Event(xs);
        int len = _13;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _90 = _23;
            while (_90) {
                /* let */ {
                    SDL_Event* _30 = Array_nth__SDL_Event(xs, i);
                    SDL_Event* event = _30;
                    SDL_EventType _36 = SDL_Event_type(event);
                    bool _38 = SDL_Event__EQ_(_36, SDL_QUIT);
                    if (_38) {
                        SDLApp_stop__void(app);
                    } else {
                        SDL_EventType _49 = SDL_Event_type(event);
                        bool _51 = SDL_Event__EQ_(_49, SDL_KEYDOWN);
                        if (_51) {
                            /* let */ {
                                SDL_Keycode _57 = SDL_Event_keycode(event);
                                SDL_Keycode key = _57;
                                bool _63 = SDL_Keycode__EQ_(key, SDLK_ESCAPE);
                                if (_63) {
                                    SDLApp_stop__void(app);
                                } else {
                                    /* () */
                                }
                            }
                        } else {
                            /* () */
                        }
                    }
                }
                int _87 = Int__PLUS_(i, 1);
                i = _87;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _90 = _23;
            }
        }
        Array_delete__SDL_Event(_8);
    }
}

SDL_Renderer** SDLApp_renderer(SDLApp* p) { return (&(p->renderer)); }

void SDLApp_run_MINUS_with_MINUS_callbacks__GameState(SDLApp* app, Fn__SDLApp_MUL__void event_MINUS_fn, Fn__GameState_GameState update_MINUS_fn, Fn__SDLApp_MUL__SDL_Renderer_MUL__GameState_MUL__void draw_MINUS_fn, GameState initial_MINUS_state) {
    /* let */ {
        SDL_Renderer** _13 = SDLApp_renderer(app);
        SDL_Renderer* _14 = Pointer_copy__SDL_Renderer(_13);
        SDL_Renderer* rend = _14;
        GameState state = initial_MINUS_state;
        int _19 = SDL_GetTicks();
        int last_MINUS_t = _19;
        int* _26 = SDLApp_fps(app);
        int _27 = Int_copy(_26);
        int _28 = Int__DIV_(1000, _27);
        int target_MINUS_dt = _28;
        bool _88 = true;
        while (_88) {
            event_MINUS_fn(app);
            GameState _41 = update_MINUS_fn(state);
            state = _41;  // GameState = GameState
            /* let */ {
                int _47 = SDL_GetTicks();
                int _49 = Int__MINUS_(_47, last_MINUS_t);
                int dt = _49;
                int _54 = Int__MINUS_(target_MINUS_dt, dt);
                int time_MINUS_left = _54;
                bool _60 = pos_QMARK___int(time_MINUS_left);
                if (_60) {
                    SDL_Delay(time_MINUS_left);
                } else {
                    /* () */
                }
            }
            int _75 = SDL_GetTicks();
            last_MINUS_t = _75;  // Int = Int
            GameState* _82 = &state; // ref
            draw_MINUS_fn(app, rend, _82);
            SDL_RenderPresent(rend);
            _88 = true;
        }
        GameState_delete(state);
    }
}

SDLApp SDLApp_set_MINUS_fps(SDLApp p, int newValue) {
    /* Ignore non-managed member 'fps' */
    p.fps = newValue;
    return p;
}


void SDLApp_set_MINUS_fps_BANG_(SDLApp* pRef, int newValue) {
    pRef->fps = newValue;
}


SDLApp SDLApp_set_MINUS_renderer(SDLApp p, SDL_Renderer* newValue) {
    /* Ignore non-managed member 'renderer' */
    p.renderer = newValue;
    return p;
}


void SDLApp_set_MINUS_renderer_BANG_(SDLApp* pRef, SDL_Renderer* newValue) {
    pRef->renderer = newValue;
}


SDLApp SDLApp_set_MINUS_window(SDLApp p, SDL_Window* newValue) {
    /* Ignore non-managed member 'window' */
    p.window = newValue;
    return p;
}


void SDLApp_set_MINUS_window_BANG_(SDLApp* pRef, SDL_Window* newValue) {
    pRef->window = newValue;
}


void SDLApp_stop__void(SDLApp* app) {
    SDL_Window** _9 = SDLApp_window(app);
    SDL_Window* _10 = Pointer_copy__SDL_Window(_9);
    SDL_DestroyWindow(_10);
    SDL_Quit();
    System_exit__void(0);
}

String SDLApp_str(SDLApp *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDLApp");
  size +=  snprintf(NULL, 0, "%p ", p->window);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  size +=  snprintf(NULL, 0, "%p ", p->renderer);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDLApp");
  bufferPtr += strlen("SDLApp") + 2;

  tempsize = snprintf(NULL, 0, "%p", p->window);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->window);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  tempsize = snprintf(NULL, 0, "%p", p->renderer);
  temp = malloc(tempsize);
  snprintf(temp, tempsize, "%p", p->renderer);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->fps);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDLApp SDLApp_update_MINUS_fps(SDLApp p, Fn__int_int updater) {
    p.fps = updater(p.fps);
    return p;
}


SDLApp SDLApp_update_MINUS_renderer(SDLApp p, Fn__SDL_Renderer_MUL__SDL_Renderer_MUL_ updater) {
    p.renderer = updater(p.renderer);
    return p;
}


SDLApp SDLApp_update_MINUS_window(SDLApp p, Fn__SDL_Window_MUL__SDL_Window_MUL_ updater) {
    p.window = updater(p.window);
    return p;
}


SDL_Window** SDLApp_window(SDLApp* p) { return (&(p->window)); }

SDL_Point SDL_Point_init(int x, int y) {
    SDL_Point instance;
    instance.x = x;
    instance.y = y;
    return instance;
}

String SDL_Point_prn(SDL_Point *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Point");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Point");
  bufferPtr += strlen("SDL_Point") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Point SDL_Point_set_MINUS_x(SDL_Point p, int newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void SDL_Point_set_MINUS_x_BANG_(SDL_Point* pRef, int newValue) {
    pRef->x = newValue;
}


SDL_Point SDL_Point_set_MINUS_y(SDL_Point p, int newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void SDL_Point_set_MINUS_y_BANG_(SDL_Point* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_Point_str(SDL_Point *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Point");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Point");
  bufferPtr += strlen("SDL_Point") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Point SDL_Point_update_MINUS_x(SDL_Point p, Fn__int_int updater) {
    p.x = updater(p.x);
    return p;
}


SDL_Point SDL_Point_update_MINUS_y(SDL_Point p, Fn__int_int updater) {
    p.y = updater(p.y);
    return p;
}


int* SDL_Point_x(SDL_Point* p) { return (&(p->x)); }

int* SDL_Point_y(SDL_Point* p) { return (&(p->y)); }

int* SDL_Rect_h(SDL_Rect* p) { return (&(p->h)); }

SDL_Rect SDL_Rect_init(int x, int y, int w, int h) {
    SDL_Rect instance;
    instance.x = x;
    instance.y = y;
    instance.w = w;
    instance.h = h;
    return instance;
}

String SDL_Rect_prn(SDL_Rect *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Rect");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Rect");
  bufferPtr += strlen("SDL_Rect") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Rect SDL_Rect_set_MINUS_h(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'h' */
    p.h = newValue;
    return p;
}


void SDL_Rect_set_MINUS_h_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->h = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_w(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'w' */
    p.w = newValue;
    return p;
}


void SDL_Rect_set_MINUS_w_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->w = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_x(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void SDL_Rect_set_MINUS_x_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->x = newValue;
}


SDL_Rect SDL_Rect_set_MINUS_y(SDL_Rect p, int newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void SDL_Rect_set_MINUS_y_BANG_(SDL_Rect* pRef, int newValue) {
    pRef->y = newValue;
}


String SDL_Rect_str(SDL_Rect *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "SDL_Rect");
  temp = Int_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "SDL_Rect");
  bufferPtr += strlen("SDL_Rect") + 2;

  temp = Int_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->w);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Int_prn(p->h);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

SDL_Rect SDL_Rect_update_MINUS_h(SDL_Rect p, Fn__int_int updater) {
    p.h = updater(p.h);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_w(SDL_Rect p, Fn__int_int updater) {
    p.w = updater(p.w);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_x(SDL_Rect p, Fn__int_int updater) {
    p.x = updater(p.x);
    return p;
}


SDL_Rect SDL_Rect_update_MINUS_y(SDL_Rect p, Fn__int_int updater) {
    p.y = updater(p.y);
    return p;
}


int* SDL_Rect_w(SDL_Rect* p) { return (&(p->w)); }

int* SDL_Rect_x(SDL_Rect* p) { return (&(p->x)); }

int* SDL_Rect_y(SDL_Rect* p) { return (&(p->y)); }

bool* Shot_alive(Shot* p) { return (&(p->alive)); }

Shot Shot_copy(Shot* pRef) {
    Shot copy = *pRef;
    /* Ignore non-managed member 'obj_MINUS_index' */
    /* Ignore non-managed member 'alive' */
    return copy;
}

void Shot_delete(Shot p) {
    /* Ignore non-managed member 'obj_MINUS_index' */
    /* Ignore non-managed member 'alive' */
}

Shot Shot_init(int obj_MINUS_index, bool alive) {
    Shot instance;
    instance.obj_MINUS_index = obj_MINUS_index;
    instance.alive = alive;
    return instance;
}

int* Shot_obj_MINUS_index(Shot* p) { return (&(p->obj_MINUS_index)); }

String Shot_prn(Shot *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Shot");
  temp = Int_prn(p->obj_MINUS_index); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->alive); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Shot");
  bufferPtr += strlen("Shot") + 2;

  temp = Int_prn(p->obj_MINUS_index);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->alive);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Shot Shot_set_MINUS_alive(Shot p, bool newValue) {
    /* Ignore non-managed member 'alive' */
    p.alive = newValue;
    return p;
}


void Shot_set_MINUS_alive_BANG_(Shot* pRef, bool newValue) {
    pRef->alive = newValue;
}


Shot Shot_set_MINUS_obj_MINUS_index(Shot p, int newValue) {
    /* Ignore non-managed member 'obj_MINUS_index' */
    p.obj_MINUS_index = newValue;
    return p;
}


void Shot_set_MINUS_obj_MINUS_index_BANG_(Shot* pRef, int newValue) {
    pRef->obj_MINUS_index = newValue;
}


String Shot_str(Shot *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Shot");
  temp = Int_prn(p->obj_MINUS_index); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->alive); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Shot");
  bufferPtr += strlen("Shot") + 2;

  temp = Int_prn(p->obj_MINUS_index);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Bool_prn(p->alive);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Shot Shot_update_MINUS_alive(Shot p, Fn__bool_bool updater) {
    p.alive = updater(p.alive);
    return p;
}


Shot Shot_update_MINUS_obj_MINUS_index(Shot p, Fn__int_int updater) {
    p.obj_MINUS_index = updater(p.obj_MINUS_index);
    return p;
}


float* Smoke_age(Smoke* p) { return (&(p->age)); }

Smoke Smoke_copy(Smoke* pRef) {
    Smoke copy = *pRef;
    copy.pos = Vec2_copy(&(pRef->pos));
    /* Ignore non-managed member 'age' */
    return copy;
}

void Smoke_delete(Smoke p) {
    Vec2_delete(p.pos);
    /* Ignore non-managed member 'age' */
}

void Smoke_draw(SDL_Renderer* rend, Smoke* s) {
    /* let */ {
        Vec2* _9 = Smoke_pos(s);
        Vec2* pos = _9;
        Art* _15 = &art; // ref
        SDL_Texture** _16 = Art_smoke(_15);
        SDL_Texture* _17 = Pointer_copy__SDL_Texture(_16);
        SDL_Texture* img = _17;
        SDL_Rect _21 = SDL_dimensions(img);
        SDL_Rect dims = _21;
        float* _31 = Smoke_age(s);
        float _32 = Float_copy(_31);
        float _33 = Float__MINUS_(1.0f, _32);
        float _34 = Float__MUL_(32.0f, _33);
        int _35 = Float_to_MINUS_int(_34);
        int sub = _35;
        SDL_Rect* _42 = &dims; // ref
        int* _43 = SDL_Rect_w(_42);
        int _44 = Int_copy(_43);
        int _46 = Int__MINUS_(_44, sub);
        int w = _46;
        SDL_Rect* _53 = &dims; // ref
        int* _54 = SDL_Rect_h(_53);
        int _55 = Int_copy(_54);
        int _57 = Int__MINUS_(_55, sub);
        int h = _57;
        bool _63 = pos_QMARK___int(w);
        if (_63) {
            float* _78 = Vec2_x(pos);
            float _79 = Float_copy(_78);
            int _80 = Float_to_MINUS_int(_79);
            int _84 = Int__DIV_(w, 2);
            int _85 = Int__MINUS_(_80, _84);
            float* _91 = Vec2_y(pos);
            float _92 = Float_copy(_91);
            int _93 = Float_to_MINUS_int(_92);
            int _97 = Int__DIV_(h, 2);
            int _98 = Int__MINUS_(_93, _97);
            SDL_Rect _101 = SDL_rect(_85, _98, w, h);
            int _109 = Int__DIV_(w, 2);
            int _113 = Int__DIV_(h, 2);
            SDL_Point _114 = SDL_point(_109, _113);
            SDL_RenderCopyEx(rend, img, &dims, &_101, 0.0, &_114, SDL_FLIP_NONE);
        } else {
            /* () */
        }
    }
}

Smoke Smoke_init(Vec2 pos, float age) {
    Smoke instance;
    instance.pos = pos;
    instance.age = age;
    return instance;
}

Vec2* Smoke_pos(Smoke* p) { return (&(p->pos)); }

String Smoke_prn(Smoke *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Smoke");
  temp = Vec2_prn(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->age); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Smoke");
  bufferPtr += strlen("Smoke") + 2;

  temp = Vec2_prn(&p->pos);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->age);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Smoke Smoke_set_MINUS_age(Smoke p, float newValue) {
    /* Ignore non-managed member 'age' */
    p.age = newValue;
    return p;
}


void Smoke_set_MINUS_age_BANG_(Smoke* pRef, float newValue) {
    pRef->age = newValue;
}


Smoke Smoke_set_MINUS_pos(Smoke p, Vec2 newValue) {
    Vec2_delete(p.pos);
    p.pos = newValue;
    return p;
}


void Smoke_set_MINUS_pos_BANG_(Smoke* pRef, Vec2 newValue) {
    pRef->pos = newValue;
}


String Smoke_str(Smoke *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Smoke");
  temp = Vec2_prn(&p->pos); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->age); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Smoke");
  bufferPtr += strlen("Smoke") + 2;

  temp = Vec2_prn(&p->pos);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->age);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

void Smoke_tick_BANG_(Smoke* s) {
    /* let */ {
        float* _9 = Smoke_age(s);
        float _10 = Float_copy(_9);
        float a = _10;
        float _17 = Float__MINUS_(a, 1.666e-2f);
        Smoke_set_MINUS_age_BANG_(s, _17);
    }
}

Smoke Smoke_update_MINUS_age(Smoke p, Fn__float_float updater) {
    p.age = updater(p.age);
    return p;
}


Smoke Smoke_update_MINUS_pos(Smoke p, Fn__Vec2_Vec2 updater) {
    p.pos = updater(p.pos);
    return p;
}


bool String__DIV__EQ_(String* a, String* b) {
    String* _12 = a; // From the 'the' function.
    bool _14 = String__EQ_(_12, b);
    bool _15 = not(_14);
    return _15;
}

bool String_alpha_QMARK_(String* s) {
    static String _5 = "^[\\u\\l]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_alphanum_QMARK_(String* s) {
    static String _5 = "^[\\w]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_chomp(String* s) {
    static String _5 = "\\n$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_collapse_MINUS_whitespace(String* s) {
    static String _5 = "\\s+";
    String *_5_ref = &_5;
    static String _7 = " ";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, -1);
    return _9;
}

int String_count_MINUS_char(String* s, char c) {
    int _54;
    /* let */ {
        int n = 0;
        /* let */ {
            int i = 0;
            int _19 = String_count(s);
            bool _20 = Int__LT_(i, _19);
            bool _50 = _20;
            while (_50) {
                char _28 = String_char_MINUS_at(s, i);
                bool _29 = Char__EQ_(c, _28);
                if (_29) {
                    int _35 = Int_inc(n);
                    n = _35;  // Int = Int
                } else {
                    /* () */
                }
                int _47 = Int__PLUS_(i, 1);
                i = _47;  // Int = Int
                int _19 = String_count(s);
                bool _20 = Int__LT_(i, _19);
                _50 = _20;
            }
        }
        int _53 = n;
        _54 = _53;
    }
    return _54;
}

bool String_empty_QMARK_(String* s) {
    int _7 = String_count(s);
    bool _9 = Int__EQ_(_7, 0);
    return _9;
}

bool String_ends_MINUS_with_QMARK_(String* s, String* sub) {
    int _13 = String_count(s);
    int _16 = String_count(sub);
    int _17 = Int__MINUS_(_13, _16);
    String _18 = String_suffix_MINUS_string(s, _17);
    String* _19 = &_18; // ref
    bool _20 = String__EQ_(sub, _19);
    String_delete(_18);
    return _20;
}

char String_head(String* s) {
    char _7 = String_char_MINUS_at(s, 0);
    return _7;
}

bool String_hex_QMARK_(String* s) {
    static String _5 = "^[\\x]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_in_QMARK_(String* s, String* sub) {
    Pattern _9 = Pattern_init(sub);
    Pattern* _10 = &_9; // ref
    bool _12 = Pattern_matches_QMARK_(_10, s);
    Pattern_delete(_9);
    return _12;
}

String String_join(Array__String* strings) {
    String _49;
    /* let */ {
        static String _7 = "";
        String *_7_ref = &_7;
        String _8 = String_copy(_7_ref);
        String result = _8;
        int _12 = Array_count__String(strings);
        int len = _12;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _45 = _23;
            while (_45) {
                String* _33 = Array_nth__String(strings, i);
                String _34 = String_copy(_33);
                String _35 = String_append(result, _34);
                result = _35;  // String = String
                int _42 = Int__PLUS_(i, 1);
                i = _42;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _45 = _23;
            }
        }
        String _48 = result;
        _49 = _48;
    }
    return _49;
}

Array__String String_lines(String* s) {
    Array _8 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(char) * 1) };
    ((char*)_8.data)[0] = '\n';
    Array__char* _9 = &_8; // ref
    Array__String _10 = String_split_MINUS_by(s, _9);
    Array_delete__char(_8);
    return _10;
}

bool String_lower_QMARK_(String* s) {
    static String _5 = "^[\\l\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

bool String_num_QMARK_(String* s) {
    static String _5 = "^[0-9]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

String String_pad_MINUS_left(int len, char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_count(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        char* _25 = &pad; // ref
        Array__char _26 = Array_replicate__char(x, _25);
        Array__char* _27 = &_26; // ref
        String _28 = String_from_MINUS_chars(_27);
        String _31 = String_copy(s);
        String _32 = String_append(_28, _31);
        _33 = _32;
        Array_delete__char(_26);
    }
    return _33;
}

String String_pad_MINUS_right(int len, char pad, String* s) {
    String _33;
    /* let */ {
        int _14 = String_count(s);
        int _15 = Int__MINUS_(len, _14);
        int _16 = max__int(0, _15);
        int x = _16;
        String _21 = String_copy(s);
        char* _28 = &pad; // ref
        Array__char _29 = Array_replicate__char(x, _28);
        Array__char* _30 = &_29; // ref
        String _31 = String_from_MINUS_chars(_30);
        String _32 = String_append(_21, _31);
        _33 = _32;
        Array_delete__char(_29);
    }
    return _33;
}

String String_prefix_MINUS_string(String* s, int a) {
    Array__char _11 = String_chars(s);
    Array__char* _12 = &_11; // ref
    Array__char _14 = Array_prefix_MINUS_array__char(_12, a);
    Array__char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__char(_11);
    Array_delete__char(_14);
    return _16;
}

String String_random_MINUS_sized(int n) {
    Array__char _9 = Array_repeat__char(n, Char_random);
    Array__char* _10 = &_9; // ref
    String _11 = String_from_MINUS_chars(_10);
    Array_delete__char(_9);
    return _11;
}

String String_repeat(int n, String* inpt) {
    String _43;
    /* let */ {
        static String _8 = "";
        String *_8_ref = &_8;
        String _9 = String_copy(_8_ref);
        String str = _9;
        /* let */ {
            int i = 0;
            bool _20 = Int__LT_(i, n);
            bool _39 = _20;
            while (_39) {
                String _28 = String_copy(inpt);
                String _29 = String_append(str, _28);
                str = _29;  // String = String
                int _36 = Int__PLUS_(i, 1);
                i = _36;  // Int = Int
                bool _20 = Int__LT_(i, n);
                _39 = _20;
            }
        }
        String _42 = str;
        _43 = _42;
    }
    return _43;
}

String String_reverse(String* s) {
    Array__char _9 = String_chars(s);
    Array__char _10 = Array_reverse__char(_9);
    Array__char* _11 = &_10; // ref
    String _12 = String_from_MINUS_chars(_11);
    Array_delete__char(_10);
    return _12;
}

Array__String String_split_MINUS_by(String* _s, Array__char* separators) {
    Array__String _80;
    /* let */ {
        String _9 = String_copy(_s);
        String s = _9;
        Array _15 = { .len = 0, .capacity = 0, .data = CARP_MALLOC(sizeof(String) * 0) };
        Array__String _16 = _15; // From the 'the' function.
        Array__String result = _16;
        Pattern _20 = Pattern_from_MINUS_chars(separators);
        Pattern pat = _20;
        Pattern* _25 = &pat; // ref
        String* _28 = &s; // ref
        int _29 = Pattern_find(_25, _28);
        int idx = _29;
        bool _36 = Int__DIV__EQ_(idx, -1);
        bool _74 = _36;
        while (_74) {
            String* _45 = &s; // ref
            String _47 = String_prefix_MINUS_string(_45, idx);
            Array__String _48 = Array_push_MINUS_back__String(result, _47);
            result = _48;  // (Array String) = (Array String)
            String* _55 = &s; // ref
            int _59 = Int__PLUS_(idx, 1);
            String _60 = String_suffix_MINUS_string(_55, _59);
            String_delete(s);
            s = _60;  // String = String
            Pattern* _67 = &pat; // ref
            String* _70 = &s; // ref
            int _71 = Pattern_find(_67, _70);
            idx = _71;  // Int = Int
            bool _36 = Int__DIV__EQ_(idx, -1);
            _74 = _36;
        }
        Array__String _78 = Array_push_MINUS_back__String(result, s);
        Array__String _79 = _78;
        _80 = _79;
        Pattern_delete(pat);
    }
    return _80;
}

bool String_starts_MINUS_with_QMARK_(String* s, String* sub) {
    int _12 = String_count(sub);
    String _13 = String_prefix_MINUS_string(s, _12);
    String* _14 = &_13; // ref
    bool _15 = String__EQ_(sub, _14);
    String_delete(_13);
    return _15;
}

String String_substring(String* s, int a, int b) {
    Array__char _12 = String_chars(s);
    Array__char* _13 = &_12; // ref
    Array__char _16 = Array_subarray__char(_13, a, b);
    Array__char* _17 = &_16; // ref
    String _18 = String_from_MINUS_chars(_17);
    Array_delete__char(_12);
    Array_delete__char(_16);
    return _18;
}

String String_suffix_MINUS_string(String* s, int b) {
    Array__char _11 = String_chars(s);
    Array__char* _12 = &_11; // ref
    Array__char _14 = Array_suffix_MINUS_array__char(_12, b);
    Array__char* _15 = &_14; // ref
    String _16 = String_from_MINUS_chars(_15);
    Array_delete__char(_11);
    Array_delete__char(_14);
    return _16;
}

String String_trim(String* s) {
    String _8 = String_trim_MINUS_right(s);
    String* _9 = &_8; // ref
    String _10 = String_trim_MINUS_left(_9);
    String_delete(_8);
    return _10;
}

String String_trim_MINUS_left(String* s) {
    static String _5 = "^\\s+";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

String String_trim_MINUS_right(String* s) {
    static String _5 = "\\s+$";
    String *_5_ref = &_5;
    static String _7 = "";
    String *_7_ref = &_7;
    String _9 = Pattern_substitute(_5_ref, s, _7_ref, 1);
    return _9;
}

bool String_upper_QMARK_(String* s) {
    static String _5 = "^[\\u\\s\\p]*$";
    String *_5_ref = &_5;
    bool _7 = Pattern_matches_QMARK_(_5_ref, s);
    return _7;
}

Array__String String_words(String* s) {
    Array _9 = { .len = 2, .capacity = 2, .data = CARP_MALLOC(sizeof(char) * 2) };
    ((char*)_9.data)[0] = '\t';
    ((char*)_9.data)[1] = ' ';
    Array__char* _10 = &_9; // ref
    Array__String _11 = String_split_MINUS_by(s, _10);
    Array_delete__char(_9);
    return _11;
}

String String_zero() {
    static String _4 = "";
    String *_4_ref = &_4;
    String _5 = String_copy(_4_ref);
    return _5;
}

bool StringCopy__DIV__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__DIV__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

bool StringCopy__EQ_(String a, String b) {
    String* _8 = &a; // ref
    String* _11 = &b; // ref
    bool _12 = String__EQ_(_8, _11);
    String_delete(a);
    String_delete(b);
    return _12;
}

void System_exit__void (int code) {
    exit(code);
}

Vec2 Vec2_add(Vec2* a, Vec2* b) {
    float* _10 = Vec2_x(a);
    float _11 = Float_copy(_10);
    float* _15 = Vec2_x(b);
    float _16 = Float_copy(_15);
    float _17 = Float__PLUS_(_11, _16);
    float* _22 = Vec2_y(a);
    float _23 = Float_copy(_22);
    float* _27 = Vec2_y(b);
    float _28 = Float_copy(_27);
    float _29 = Float__PLUS_(_23, _28);
    Vec2 _30 = Vec2_init(_17, _29);
    return _30;
}

Vec2 Vec2_copy(Vec2* pRef) {
    Vec2 copy = *pRef;
    /* Ignore non-managed member 'x' */
    /* Ignore non-managed member 'y' */
    return copy;
}

void Vec2_delete(Vec2 p) {
    /* Ignore non-managed member 'x' */
    /* Ignore non-managed member 'y' */
}

Vec2 Vec2_init(float x, float y) {
    Vec2 instance;
    instance.x = x;
    instance.y = y;
    return instance;
}

String Vec2_prn(Vec2 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Vec2");
  temp = Float_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Vec2");
  bufferPtr += strlen("Vec2") + 2;

  temp = Float_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Vec2 Vec2_set_MINUS_x(Vec2 p, float newValue) {
    /* Ignore non-managed member 'x' */
    p.x = newValue;
    return p;
}


void Vec2_set_MINUS_x_BANG_(Vec2* pRef, float newValue) {
    pRef->x = newValue;
}


Vec2 Vec2_set_MINUS_y(Vec2 p, float newValue) {
    /* Ignore non-managed member 'y' */
    p.y = newValue;
    return p;
}


void Vec2_set_MINUS_y_BANG_(Vec2* pRef, float newValue) {
    pRef->y = newValue;
}


String Vec2_str(Vec2 *p) {
  // convert members to String here:
  String temp = NULL;
  int tempsize = 0;
  (void)tempsize; // that way we remove the occasional unused warning 
  int size = snprintf(NULL, 0, "(%s )", "Vec2");
  temp = Float_prn(p->x); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->y); 
  size += snprintf(NULL, 0, "%s ", temp);
  if(temp) { CARP_FREE(temp); temp = NULL; }


  String buffer = CARP_MALLOC(size);
  String bufferPtr = buffer;

  snprintf(bufferPtr, size, "(%s ", "Vec2");
  bufferPtr += strlen("Vec2") + 2;

  temp = Float_prn(p->x);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  temp = Float_prn(p->y);
  snprintf(bufferPtr, size, "%s ", temp);
  bufferPtr += strlen(temp) + 1;
  if(temp) { CARP_FREE(temp); temp = NULL; }

  bufferPtr--;
  snprintf(bufferPtr, size, ")");
  return buffer;
}

Vec2 Vec2_update_MINUS_x(Vec2 p, Fn__float_float updater) {
    p.x = updater(p.x);
    return p;
}


Vec2 Vec2_update_MINUS_y(Vec2 p, Fn__float_float updater) {
    p.y = updater(p.y);
    return p;
}


float* Vec2_x(Vec2* p) { return (&(p->x)); }

float* Vec2_y(Vec2* p) { return (&(p->y)); }

void ai(GameState* state, Obj* obj) {
    int _11 = Int_random_MINUS_between(0, 100);
    bool _12 = Int__EQ_(0, _11);
    if (_12) {
        Vec2* _19 = Obj_pos(obj);
        Vec2 _20 = Vec2_copy(_19);
        float* _24 = Obj_dir(obj);
        float _25 = Float_copy(_24);
        shoot(state, _20, _25);
    } else {
        /* () */
    }
}

String append_MINUS_slash__String_MUL_(String* s) {
    String _7 = String_str(s);
    static String _9 = "/";
    String *_9_ref = &_9;
    String _10 = String_str(_9_ref);
    String _11 = String_append(_7, _10);
    return _11;
}

Fn__Art_MUL__SDL_Texture_MUL__MUL_ copy__Art_MUL__SDL_Texture_MUL__MUL__Fn__Art_MUL__SDL_Texture_MUL__MUL_ (Fn__Art_MUL__SDL_Texture_MUL__MUL_* ref) {
    return *ref;
}

Shot dead_MINUS_shot(int* i) {
    int _7 = Int_copy(i);
    Shot _9 = Shot_init(_7, false);
    return _9;
}

Obj dead_MINUS_shot_MINUS_obj() {
    Vec2 _7 = Vec2_init(0.0f, -100.0f);
    Obj _12 = Obj_init(_7, 10.0f, 0.0f, 0.0f, Art_shot);
    return _12;
}

String dir_MINUS_from_MINUS_path(String* path) {
    String _39;
    /* let */ {
        Array _10 = { .len = 1, .capacity = 1, .data = CARP_MALLOC(sizeof(char) * 1) };
        ((char*)_10.data)[0] = '/';
        Array__char* _11 = &_10; // ref
        Array__String _12 = String_split_MINUS_by(path, _11);
        Array__String segments = _12;
        Array__String* _18 = &segments; // ref
        int _19 = Array_count__String(_18);
        int _20 = Int_dec(_19);
        int n = _20;
        Array__String* _25 = &segments; // ref
        Array__String _27 = Array_prefix_MINUS_array__String(_25, n);
        Array__String without_MINUS_last = _27;
        Array__String* _35 = &without_MINUS_last; // ref
        Array__String _36 = Array_copy_MINUS_map__String_String(append_MINUS_slash__String_MUL_, _35);
        Array__String* _37 = &_36; // ref
        String _38 = String_join(_37);
        _39 = _38;
        Array_delete__String(_36);
        Array_delete__String(segments);
        Array_delete__String(without_MINUS_last);
        Array_delete__char(_10);
    }
    return _39;
}

void draw__SDLApp_MUL_(SDLApp* app, SDL_Renderer* rend, GameState* state) {
    SDL_Color _14 = SDL_rgb(30, 40, 50);
    SDL_Color* _15 = &_14; // ref
    SDL_bg(rend, _15);
    SDL_RenderClear(rend);
    Art* _26 = &art; // ref
    SDL_Texture** _27 = Art_earth(_26);
    SDL_Texture* _28 = Pointer_copy__SDL_Texture(_27);
    int _34 = Int__MINUS_(screen_MINUS_width, 256);
    SDL_Point _36 = SDL_point(_34, 0);
    SDL_Point* _37 = &_36; // ref
    SDL_draw_MINUS_texture(rend, _28, _37);
    Art* _45 = &art; // ref
    SDL_Texture** _46 = Art_mothership(_45);
    SDL_Texture* _47 = Pointer_copy__SDL_Texture(_46);
    SDL_Point _52 = SDL_point(0, 0);
    SDL_Point* _53 = &_52; // ref
    SDL_draw_MINUS_texture(rend, _47, _53);
    /* let */ {
        Array__Smoke* _59 = &smokes; // ref
        Array__Smoke* xs = _59;
        int _63 = Array_count__Smoke(xs);
        int len = _63;
        /* let */ {
            int i = 0;
            bool _73 = Int__LT_(i, len);
            bool _95 = _73;
            while (_95) {
                /* let */ {
                    Smoke* _80 = Array_nth__Smoke(xs, i);
                    Smoke* s = _80;
                    Smoke_draw(rend, s);
                }
                int _92 = Int__PLUS_(i, 1);
                i = _92;  // Int = Int
                bool _73 = Int__LT_(i, len);
                _95 = _73;
            }
        }
    }
    /* let */ {
        Array__Obj* _102 = GameState_objs(state);
        Array__Obj* xs = _102;
        int _106 = Array_count__Obj(xs);
        int len = _106;
        /* let */ {
            int i = 0;
            bool _116 = Int__LT_(i, len);
            bool _138 = _116;
            while (_138) {
                /* let */ {
                    Obj* _123 = Array_nth__Obj(xs, i);
                    Obj* o = _123;
                    Obj_draw(rend, o);
                }
                int _135 = Int__PLUS_(i, 1);
                i = _135;  // Int = Int
                bool _116 = Int__LT_(i, len);
                _138 = _116;
            }
        }
    }
}

void event_MINUS_handler(SDLApp* app) {
    /* let */ {
        Array__SDL_Event _8 = SDL_Event_all();
        Array__SDL_Event* _9 = &_8; // ref
        Array__SDL_Event* xs = _9;
        int _13 = Array_count__SDL_Event(xs);
        int len = _13;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _90 = _23;
            while (_90) {
                /* let */ {
                    SDL_Event* _30 = Array_nth__SDL_Event(xs, i);
                    SDL_Event* event = _30;
                    SDL_EventType _36 = SDL_Event_type(event);
                    bool _38 = SDL_Event__EQ_(_36, SDL_QUIT);
                    if (_38) {
                        SDLApp_stop__void(app);
                    } else {
                        SDL_EventType _49 = SDL_Event_type(event);
                        bool _51 = SDL_Event__EQ_(_49, SDL_KEYDOWN);
                        if (_51) {
                            /* let */ {
                                SDL_Keycode _57 = SDL_Event_keycode(event);
                                SDL_Keycode key = _57;
                                bool _63 = SDL_Keycode__EQ_(key, SDLK_ESCAPE);
                                if (_63) {
                                    SDLApp_stop__void(app);
                                } else {
                                    /* () */
                                }
                            }
                        } else {
                            /* () */
                        }
                    }
                }
                int _87 = Int__PLUS_(i, 1);
                i = _87;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _90 = _23;
            }
        }
        Array_delete__SDL_Event(_8);
    }
}

int index_MINUS_of_MINUS_dead_MINUS_shot(Array__Shot* shots) {
    int _56;
    /* let */ {
        int found = -1;
        /* let */ {
            int i = 0;
            int _18 = Array_count__Shot(shots);
            bool _19 = Int__LT_(i, _18);
            bool _52 = _19;
            while (_52) {
                Shot* _28 = Array_nth__Shot(shots, i);
                bool* _29 = Shot_alive(_28);
                bool _30 = Bool_copy(_29);
                bool _31 = not(_30);
                if (_31) {
                    found = i;  // Int = Int
                    break;
                } else {
                    /* () */
                }
                int _49 = Int__PLUS_(i, 1);
                i = _49;  // Int = Int
                int _18 = Array_count__Shot(shots);
                bool _19 = Int__LT_(i, _18);
                _52 = _19;
            }
        }
        int _55 = found;
        _56 = _55;
    }
    return _56;
}

void load_MINUS_assets__String_MUL_(SDL_Renderer* rend, String* img_MINUS_dir) {
    static String _12 = "Corvette.png";
    String *_12_ref = &_12;
    SDL_Texture* _13 = load_MINUS_img__String_MUL__String_MUL_(rend, img_MINUS_dir, _12_ref);
    static String _17 = "Slime.png";
    String *_17_ref = &_17;
    SDL_Texture* _18 = load_MINUS_img__String_MUL__String_MUL_(rend, img_MINUS_dir, _17_ref);
    static String _22 = "Shot.png";
    String *_22_ref = &_22;
    SDL_Texture* _23 = load_MINUS_img__String_MUL__String_MUL_(rend, img_MINUS_dir, _22_ref);
    static String _27 = "Smoke.png";
    String *_27_ref = &_27;
    SDL_Texture* _28 = load_MINUS_img__String_MUL__String_MUL_(rend, img_MINUS_dir, _27_ref);
    static String _32 = "Earth.png";
    String *_32_ref = &_32;
    SDL_Texture* _33 = load_MINUS_img__String_MUL__String_MUL_(rend, img_MINUS_dir, _32_ref);
    static String _37 = "Mothership.png";
    String *_37_ref = &_37;
    SDL_Texture* _38 = load_MINUS_img__String_MUL__String_MUL_(rend, img_MINUS_dir, _37_ref);
    Art _39 = Art_init(_13, _18, _23, _28, _33, _38);
    Art_delete(art);
    art = _39;  // Art = Art
}

SDL_Texture* load_MINUS_img__String_MUL__String_MUL_(SDL_Renderer* rend, String* img_MINUS_dir, String* name) {
    String _13 = String_str(img_MINUS_dir);
    String _16 = String_str(name);
    String _17 = String_append(_13, _16);
    String* _18 = &_17; // ref
    char* _19 = String_cstr(_18);
    SDL_Texture* _20 = IMG_LoadTexture(rend, _19);
    String_delete(_17);
    return _20;
}

void log__String_MUL_(String* msg) {
    int _9 = SDL_GetTicks();
    String _10 = Int_str(_9);
    static String _13 = ": ";
    String *_13_ref = &_13;
    String _14 = String_str(_13_ref);
    String _17 = String_str(msg);
    String _18 = String_append(_14, _17);
    String _19 = String_append(_10, _18);
    String* _20 = &_19; // ref
    IO_println(_20);
    String_delete(_19);
}

int main(int argc, char** argv) {
    carp_init_globals(argc, argv);
    /* let */ {
        static String _6 = "Dependency Day";
        String *_6_ref = &_6;
        SDLApp _9 = SDLApp_create(_6_ref, screen_MINUS_width, screen_MINUS_height);
        SDLApp app = _9;
        GameState _12 = make_MINUS_state();
        GameState state = _12;
        SDLApp* _18 = &app; // ref
        SDL_Renderer** _19 = SDLApp_renderer(_18);
        SDL_Renderer* _20 = Pointer_copy__SDL_Renderer(_19);
        SDL_Renderer* rend = _20;
        String* _28 = System_get_MINUS_arg(0);
        String _29 = dir_MINUS_from_MINUS_path(_28);
        String* _30 = &_29; // ref
        String _31 = String_str(_30);
        static String _33 = "/img/";
        String *_33_ref = &_33;
        String _34 = String_str(_33_ref);
        String _35 = String_append(_31, _34);
        String img_MINUS_dir = _35;
        String* _42 = &img_MINUS_dir; // ref
        load_MINUS_assets__String_MUL_(rend, _42);
        SDL_SetRenderDrawBlendMode(rend, SDL_BLENDMODE_BLEND);
        SDLApp* _51 = &app; // ref
        SDLApp_run_MINUS_with_MINUS_callbacks__GameState(_51, event_MINUS_handler, tick, draw__SDLApp_MUL_, state);
        SDLApp_delete(app);
        String_delete(_29);
        String_delete(img_MINUS_dir);
    }
}

GameState make_MINUS_state() {
    Array _18 = { .len = 3, .capacity = 3, .data = CARP_MALLOC(sizeof(Array__Obj) * 3) };
    Array__Obj _9 = Array_repeat__Obj(200, dead_MINUS_shot_MINUS_obj);
    ((Array__Obj*)_18.data)[0] = _9;
    Array__Obj _13 = Array_repeat__Obj(20, random_MINUS_alien);
    ((Array__Obj*)_18.data)[1] = _13;
    Array__Obj _17 = Array_repeat__Obj(20, random_MINUS_human);
    ((Array__Obj*)_18.data)[2] = _17;
    Array__Array__Obj* _19 = &_18; // ref
    Array__Obj _20 = Array_concat__Obj(_19);
    Array__int _28 = Array_range(0, 199, 1);
    Array__int* _29 = &_28; // ref
    Array__Shot _30 = Array_copy_MINUS_map__int_Shot(dead_MINUS_shot, _29);
    GameState _31 = GameState_init(_20, _30);
    Array_delete__Array__Obj(_18);
    Array_delete__int(_28);
    return _31;
}

int max__int(int a, int b) {
    int _16;
    bool _9 = Int__GT_(a, b);
    if (_9) {
        int _12 = a;
        _16 = _12;
    } else {
        int _15 = b;
        _16 = _15;
    }
    return _16;
}

bool pos_MINUS_outside_QMARK_(Vec2* pos) {
    bool _44;
    /* let */ {
        float* _9 = Vec2_x(pos);
        float _10 = Float_copy(_9);
        float x = _10;
        float* _15 = Vec2_y(pos);
        float _16 = Float_copy(_15);
        float y = _16;
        bool _43 = false;
        bool _22 = Float__LT_(x, 0.0f);
        if(_22) {
            _43 = true;
        } else {
            bool _42 = false;
            bool _27 = Float__LT_(y, 0.0f);
            if(_27) {
                _42 = true;
            } else {
                bool _41 = false;
                float _32 = Float_from_MINUS_int(screen_MINUS_width);
                bool _34 = Float__LT_(_32, x);
                if(_34) {
                    _41 = true;
                } else {
                    float _38 = Float_from_MINUS_int(screen_MINUS_height);
                    bool _40 = Float__LT_(_38, y);
                    _41 = _40;
                }
                _42 = _41;
            }
            _43 = _42;
        }
        _44 = _43;
    }
    return _44;
}

bool pos_QMARK___int(int x) {
    int _6 = Int_zero();
    bool _8 = Int__LT_(_6, x);
    return _8;
}

String prn__Art_MUL__SDL_Texture_MUL__MUL_ (void *f) {
    static String lambda = "λ";
    return String_copy(&lambda);
}

Obj random_MINUS_alien() {
    Obj _5 = random_MINUS_ship(team_MINUS_alien);
    return _5;
}

Obj random_MINUS_human() {
    Obj _5 = random_MINUS_ship(team_MINUS_human);
    return _5;
}

Obj random_MINUS_ship(int side) {
    Obj _102;
    /* let */ {
        bool _9 = Int__EQ_(side, team_MINUS_alien);
        bool is_MINUS_alien = _9;
        int _22;
        if (is_MINUS_alien) {
            int _15 = 0;
            _22 = _15;
        } else {
            int _20 = Int__MINUS_(screen_MINUS_width, 300);
            int _21 = _20;
            _22 = _21;
        }
        int low = _22;
        int _32;
        if (is_MINUS_alien) {
            int _28 = 300;
            _32 = _28;
        } else {
            int _31 = screen_MINUS_width;
            _32 = _31;
        }
        int high = _32;
        float _48;
        if (is_MINUS_alien) {
            float _40 = Float__MUL_(Float_pi, -0.25f);
            float _41 = _40;
            _48 = _41;
        } else {
            float _46 = Float__MUL_(Float_pi, 0.75f);
            float _47 = _46;
            _48 = _47;
        }
        float dir_MINUS_low = _48;
        float _64;
        if (is_MINUS_alien) {
            float _56 = Float__MUL_(Float_pi, 0.25f);
            float _57 = _56;
            _64 = _57;
        } else {
            float _62 = Float__MUL_(Float_pi, 1.25f);
            float _63 = _62;
            _64 = _63;
        }
        float dir_MINUS_high = _64;
        Fn__Art_MUL__SDL_Texture_MUL__MUL_ _74;
        if (is_MINUS_alien) {
            Fn__Art_MUL__SDL_Texture_MUL__MUL_ _70 = Art_slime;
            _74 = _70;
        } else {
            Fn__Art_MUL__SDL_Texture_MUL__MUL_ _73 = Art_corvette;
            _74 = _73;
        }
        Fn__Art_MUL__SDL_Texture_MUL__MUL_ sprite = _74;
        int _82 = Int_random_MINUS_between(low, high);
        float _83 = Float_from_MINUS_int(_82);
        float _88 = Float_from_MINUS_int(screen_MINUS_height);
        float _89 = Float_random_MINUS_between(0.0f, _88);
        Vec2 _90 = Vec2_init(_83, _89);
        float _95 = Float_random_MINUS_between(dir_MINUS_low, dir_MINUS_high);
        float _99 = Float_random_MINUS_between(1.0f, 2.0f);
        Obj _101 = Obj_init(_90, 10.0f, _95, _99, sprite);
        _102 = _101;
    }
    return _102;
}

void reuse_MINUS_smoke(Vec2 pos) {
    /* let */ {
        Array__Smoke* _9 = &smokes; // ref
        Array__Smoke* xs = _9;
        int _13 = Array_count__Smoke(xs);
        int len = _13;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _70 = _23;
            while (_70) {
                /* let */ {
                    Smoke* _30 = Array_nth__Smoke(xs, i);
                    Smoke* s = _30;
                    float* _37 = Smoke_age(s);
                    float _38 = Float_copy(_37);
                    bool _40 = _LT__EQ___float(_38, 0.0f);
                    if (_40) {
                        Smoke_set_MINUS_age_BANG_(s, 1.0f);
                        Vec2* _51 = &pos; // ref
                        Vec2 _52 = Vec2_copy(_51);
                        Smoke_set_MINUS_pos_BANG_(s, _52);
                        break;
                    } else {
                        /* () */
                    }
                }
                int _67 = Int__PLUS_(i, 1);
                i = _67;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _70 = _23;
            }
        }
    }
    /* let */ {
        Array__Smoke* _78 = &smokes; // ref
        Array__Smoke* _84 = &smokes; // ref
        int _85 = Array_count__Smoke(_84);
        int _86 = Int_random_MINUS_between(0, _85);
        Smoke* _87 = Array_nth__Smoke(_78, _86);
        Smoke* s = _87;
        Smoke_set_MINUS_age_BANG_(s, 1.0f);
        Smoke_set_MINUS_pos_BANG_(s, pos);
    }
}

void shoot(GameState* state, Vec2 pos, float dir) {
    /* let */ {
        Array__Shot* _10 = GameState_shots(state);
        Array__Shot* shots = _10;
        int _14 = index_MINUS_of_MINUS_dead_MINUS_shot(shots);
        int found = _14;
        bool _20 = Int__EQ_(-1, found);
        if (_20) {
            static String _23 = "Can't shoot, no dead shot found to recycle.";
            String *_23_ref = &_23;
            log__String_MUL_(_23_ref);
            Vec2_delete(pos);
        } else {
            /* let */ {
                Shot* _32 = Array_nth__Shot(shots, found);
                Shot* shot = _32;
                Array__Obj* _36 = GameState_objs(state);
                Array__Obj* objs = _36;
                int* _43 = Shot_obj_MINUS_index(shot);
                int _44 = Int_copy(_43);
                Obj* _45 = Array_nth__Obj(objs, _44);
                Obj* obj = _45;
                Shot_set_MINUS_alive_BANG_(shot, true);
                Obj_set_MINUS_pos_BANG_(obj, pos);
                Obj_set_MINUS_dir_BANG_(obj, dir);
                Obj_set_MINUS_speed_BANG_(obj, 5.0f);
            }
        }
    }
}

GameState tick(GameState state) {
    /* let */ {
        Array__Smoke* _9 = &smokes; // ref
        Array__Smoke* xs = _9;
        int _13 = Array_count__Smoke(xs);
        int len = _13;
        /* let */ {
            int i = 0;
            bool _23 = Int__LT_(i, len);
            bool _44 = _23;
            while (_44) {
                /* let */ {
                    Smoke* _30 = Array_nth__Smoke(xs, i);
                    Smoke* s = _30;
                    Smoke_tick_BANG_(s);
                }
                int _41 = Int__PLUS_(i, 1);
                i = _41;  // Int = Int
                bool _23 = Int__LT_(i, len);
                _44 = _23;
            }
        }
    }
    /* let */ {
        GameState* _52 = &state; // ref
        Array__Obj* _53 = GameState_objs(_52);
        Array__Obj* xs = _53;
        int _57 = Array_count__Obj(xs);
        int len = _57;
        /* let */ {
            int i = 0;
            bool _67 = Int__LT_(i, len);
            bool _93 = _67;
            while (_93) {
                /* let */ {
                    Obj* _74 = Array_nth__Obj(xs, i);
                    Obj* o = _74;
                    GameState* _80 = &state; // ref
                    ai(_80, o);
                }
                int _90 = Int__PLUS_(i, 1);
                i = _90;  // Int = Int
                bool _67 = Int__LT_(i, len);
                _93 = _67;
            }
        }
    }
    /* let */ {
        GameState* _101 = &state; // ref
        Array__Shot* _102 = GameState_shots(_101);
        Array__Shot* xs = _102;
        int _106 = Array_count__Shot(xs);
        int len = _106;
        /* let */ {
            int i = 0;
            bool _116 = Int__LT_(i, len);
            bool _168 = _116;
            while (_168) {
                /* let */ {
                    Shot* _123 = Array_nth__Shot(xs, i);
                    Shot* shot = _123;
                    /* let */ {
                        GameState* _130 = &state; // ref
                        Array__Obj* _131 = GameState_objs(_130);
                        Array__Obj* objs = _131;
                        int* _138 = Shot_obj_MINUS_index(shot);
                        int _139 = Int_copy(_138);
                        Obj* _140 = Array_nth__Obj(objs, _139);
                        Obj* obj = _140;
                        Vec2* _146 = Obj_pos(obj);
                        bool _147 = pos_MINUS_outside_QMARK_(_146);
                        if (_147) {
                            Shot_set_MINUS_alive_BANG_(shot, false);
                        } else {
                            /* () */
                        }
                    }
                }
                int _165 = Int__PLUS_(i, 1);
                i = _165;  // Int = Int
                bool _116 = Int__LT_(i, len);
                _168 = _116;
            }
        }
    }
    GameState _188;
    /* let */ {
        GameState* _179 = &state; // ref
        Array__Obj* _180 = GameState_objs(_179);
        Array__Obj _181 = Array_copy__Obj(_180);
        Array__Obj _182 = Array_endo_MINUS_map__Obj(Obj_tick, _181);
        Array__Obj new_MINUS_objs = _182;
        GameState _187 = GameState_set_MINUS_objs(state, new_MINUS_objs);
        _188 = _187;
    }
    GameState _189 = _188;
    return _189;
}

