#ifndef INNER_CORE_IC_RENDER_H
#define INNER_CORE_IC_RENDER_H


class Block;
class BlockPos;
class BlockSource;

class ICRenderCondition {
    public:
    virtual bool apply(BlockSource*, const Block&, const BlockPos&);
};


#endif //INNER_CORE_IC_RENDER_H