#!/bin/bash

python3 ./src/train_new.py \
    --debug \
    --datapath data// \
    --seed 42 \
    --dataset cora \
    --type mutigcn \
    --nhiddenlayer 1 \
    --nbaseblocklayer 2 \
    --hidden 128 \
    --epoch 400 \
    --lr 0.01 \
    --weight_decay 0.005 \
    --early_stopping 400 \
    --sampling_percent 1 \
    --dropout 0.8 \
    --normalization FirstOrderGCN \
     \
    
