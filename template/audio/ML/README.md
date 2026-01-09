# ML Layer

This directory contains the Machine Learning layer for Keyword Spotting using the ML model. The ML layer provides the necessary components and models to ... on embedded devices with or without Arm Ethos-U NPU acceleration.

## Components

### CMSIS Libraries



### TensorFlow Lite Micro



## Models


## Usage

### Target Type Specification

The ML layer needs properly specified build context to automatically select the appropriate model variant.

Based on the target hardware configuration the target-type shall use the naming convention:

```yml
<name>-<NPU family>-<NPU MACs>
# Where:
# - <name> can be arbitrary name
# - <NPU family> is the Ethos-U NPU family name (U55, U65, U85), if omitted Ethos-U NPU won't be used
# - <NPU MACs> is the number of NPU MACs (128, 256), if omitted 256 MACs is assumed
```

Examples:

```yml
target-types:
  - type: myDevice-U55-128 # Specifies Ethos-U55 with 128 MACs
    ...
  - type: myBoard-U65      # Specifies Ethos-U65 with 256 MACs
    ...
```


## Dependencies

- CMSIS-DSP v1.16.0+
- CMSIS-NN v7.0.0+
- ML Embedded Eval Kit v24.8.0+
- TensorFlow Lite Micro v1.25.2+
