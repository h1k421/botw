#pragma once

#include "Game/AI/Action/actionPlayerAction.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayerSuperJumpCharge : public PlayerAction {
    SEAD_RTTI_OVERRIDE(PlayerSuperJumpCharge, PlayerAction)
public:
    explicit PlayerSuperJumpCharge(const InitArg& arg);
    ~PlayerSuperJumpCharge() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // static_param at offset 0x20
    const float* mChargeTime_s{};
};

}  // namespace uking::action