#pragma once

#include <agl/Utils/aglParameterIO.h>
#include <hostio/seadHostIONode.h>
#include <math/seadVector.h>
#include <prim/seadSafeString.h>
#include "KingSystem/Utils/Types.h"

namespace ksys {

class ParamIO : public agl::utl::IParameterIO, public sead::hostio::Node {
public:
    using agl::utl::IParameterIO::IParameterIO;

    virtual bool ParamIO_m0() { return false; }

    bool applyResourceUpdate(const char* data, const char* data1);

    const char* getString(const agl::utl::ResParameterObj& obj, const char* key,
                          const char* default_value, void* = nullptr) const;
    sead::Vector3f getVec3(const agl::utl::ResParameterObj& obj, const char* key,
                           sead::Vector3f default_value, void* = nullptr) const;

    u32 getIdx() const { return mIdx; }
    sead::BufferedSafeString& getPath() { return mPath; }
    const sead::BufferedSafeString& getPath() const { return mPath; }
    void setIndex(u32 idx) { mIdx = idx; }

protected:
    u32 mIdx = 0x1c;
    sead::FixedSafeString<128> mPath;
};
KSYS_CHECK_SIZE_NX150(ParamIO, 0x278);

}  // namespace ksys
