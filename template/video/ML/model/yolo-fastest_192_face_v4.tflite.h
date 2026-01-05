#ifndef YOLO_FASTEST_192_FACE_V4_TFLITE_H__
#define YOLO_FASTEST_192_FACE_V4_TFLITE_H__

#include <stdint.h>
#include <stddef.h>

/**
  Model configuration parameters.
*/
typedef struct {
    int originalImageSize;        // Original input image size (assumed square)
    int channelsImageDisplayed;   // 
    const float *anchor1;         // Pointer to first anchor array
    const float *anchor2;         // Pointer to second anchor array
    int numAnchors1;              // Number of elements in anchor1
    int numAnchors2;              // Number of elements in anchor2
} ModelConfig;

#ifdef __cplusplus
extern "C"  {
#endif


/**
  Get a pointer to the model data.
*/
const uint8_t *GetModelPointer(void);

/**
  Get the length of the model data.
*/
size_t GetModelLen(void);

/*
  Get the model configuration parameters.
*/
const ModelConfig *GetModelConfig(void);


#ifdef __cplusplus
}
#endif

#endif /* YOLO_FASTEST_192_FACE_V4_TFLITE_H__ */