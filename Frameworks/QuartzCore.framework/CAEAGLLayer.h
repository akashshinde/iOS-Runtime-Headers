/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CAEAGLLayer : CALayer <EAGLDrawable>
{

  /* Error parsing encoded ivar type info: ^{_CAEAGLNativeWindow={_EGLNativeWindowObject="version"i"attach"^?"detach"^?"begin"^?"swap"^?"collect"^?}{EGLNativeWindowCallbacksRec="callback_data"^v"create_buffer"^?"destroy_buffer"^?}^{x_list_struct}{?="x"i}{?="x"i}^{_CAImageQueue}@"CAEAGLLayer"^{x_list_struct}I^vb1b1} */
    struct _CAEAGLNativeWindow { struct _EGLNativeWindowObject { 
            NSInteger version; 
            int (*attach)(); 
            int (*detach)(); 
            int (*begin)(); 
            int (*swap)(); 
            int (*collect)(); 
        } x1; struct EGLNativeWindowCallbacksRec { 
            void *callback_data; 
            int (*create_buffer)(); 
            int (*destroy_buffer)(); 
        } x2; struct x_list_struct {} *x3; struct { 
            NSInteger x; 
        } x4; struct { 
            NSInteger x; 
        } x5; struct _CAImageQueue {} *x6; id x7; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x8; unsigned char x9; void*x10; void*x11; void*x12; void*x13; unsigned long x14; unsigned long x15; void*x16; void*x17; void*x18; const void*x19; struct x_list_struct {} *x20; NSUInteger x21; void *x22; unsigned int x23 : 1; unsigned int x24 : 1; } *_win;

}

@property(copy) NSDictionary *drawableProperties;

+ (id)defaultValueForKey:(id)arg1;

- (void)didChangeValueForKey:(id)arg1;
- (struct _EAGLNativeWindowObject { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); }*)nativeWindow;
- (void)dealloc;
- (void)_display;
- (id)drawableProperties;
- (void)setDrawableProperties:(id)arg1;

@end