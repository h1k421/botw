#pragma once

#include "KingSystem/ActorSystem/actAiAi.h"

namespace uking::ai {

class RuinGuardianRoot : public ksys::act::ai::Ai {
    SEAD_RTTI_OVERRIDE(RuinGuardianRoot, ksys::act::ai::Ai)
public:
    explicit RuinGuardianRoot(const InitArg& arg);
    ~RuinGuardianRoot() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    // static_param at offset 0x38
    const int* mSweepFrame_s{};
    // static_param at offset 0x40
    const float* mDropThreshold_s{};
};

}  // namespace uking::ai
