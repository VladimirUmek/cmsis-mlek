#ifndef MODEL_CONFIG_H__
#define MODEL_CONFIG_H__

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

//  <s>NN Model Buffer Section Name
//  <i> Define the name of the NN model buffer section
//  <i> Default: "nn_model"
#ifndef NN_MODEL_BUF_SECTION
#define NN_MODEL_BUF_SECTION        ".nn_model"
#endif
//  <o>NN Model Buffer Alignment
//  <i> Define the NN model buffer alignment in bytes
//  <i> Default: 16
#ifndef NN_MODEL_BUF_ALIGNMENT
#define NN_MODEL_BUF_ALIGNMENT      16
#endif

#endif /* MODEL_CONFIG_H__ */