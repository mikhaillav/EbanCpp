/**
 * @file  SnapshotEnv.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SnapshotEnv.
 *
 */
class SnapshotEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPSHOTENV
public:
    class SnapshotEnv& operator=(class SnapshotEnv const &) = delete;
    SnapshotEnv(class SnapshotEnv const &) = delete;
    SnapshotEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   226044247
     */
    virtual ~SnapshotEnv();
    /**
     * @vftbl  1
     * @symbol ?NewSequentialFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     * @hash   -668389623
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     * @hash   1152401993
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @vftbl  3
     * @symbol ?NewWritableFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     * @hash   2091742811
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vftbl  4
     * @symbol ?NewAppendableFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     * @hash   -1934076993
     */
    virtual class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vftbl  7
     * @symbol ?DeleteFileA@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1208241775
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @vftbl  11
     * @symbol ?RenameFile@SnapshotEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   774070029
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @symbol ??0SnapshotEnv@@QEAA@PEAVEnv@leveldb@@@Z
     * @hash   -1997726201
     */
    MCAPI SnapshotEnv(class leveldb::Env *);
    /**
     * @symbol ?createSnapshot@SnapshotEnv@@QEAA?AV?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@AEBVPath@Core@@@Z
     * @hash   882601175
     */
    MCAPI std::vector<struct SnapshotFilenameAndLength> createSnapshot(class Core::Path const &);
    /**
     * @symbol ?releaseSnapshot@SnapshotEnv@@QEAAXXZ
     * @hash   1091317419
     */
    MCAPI void releaseSnapshot();

//private:
    /**
     * @symbol ?_isQueuedForRemoval@SnapshotEnv@@AEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     * @hash   -897089508
     */
    MCAPI bool _isQueuedForRemoval(class Core::PathBuffer<std::string> const &);

private:

};