// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LiquidBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCK
public:
    class LiquidBlock& operator=(class LiquidBlock const &) = delete;
    LiquidBlock(class LiquidBlock const &) = delete;
    LiquidBlock() = delete;
#endif


public:
    /*0*/ virtual ~LiquidBlock();
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual bool canContainLiquid() const;
    /*67*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual void __unk_vfn_80();
    /*88*/ virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /*98*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*100*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*105*/ virtual void __unk_vfn_105();
    /*110*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*136*/ virtual int getColor(class Block const &) const;
    /*138*/ virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /*141*/ virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*187*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCK
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI LiquidBlock(std::string const &, int, class Material const &);
    MCAPI int getTickDelay(class BlockSource &) const;
    MCAPI static float getHeightFromDepth(int);
    MCAPI static void handleEntityInside(class IConstBlockSource const &, class BlockPos const &, class Vec3 &, class Material const &);

//protected:
    MCAPI void emitFizzParticle(class BlockSource &, class BlockPos const &) const;
    MCAPI void solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    MCAPI void trySpreadFire(class BlockSource &, class BlockPos const &, class Random &) const;
    MCAPI static int getDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);
    MCAPI static int getRenderedDepth(class IConstBlockSource const &, class BlockPos const &, class Material const &);

//private:
    MCAPI void _solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    MCAPI static class Vec3 _getFlow(class IConstBlockSource const &, class BlockPos const &, class Material const &);


protected:

private:


};