#import "RDGPUImageFilter.h"

@interface RDGPUImageExposureFilter : RDGPUImageFilter
{
    GLint exposureUniform;
}

// Exposure ranges from -10.0 to 10.0, with 0.0 as the normal level
@property(readwrite, nonatomic) CGFloat exposure; 

@end