#pragma once

#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class CollaborationShootingStarAnchor : public ksys::act::ai::Action {
    SEAD_RTTI_OVERRIDE(CollaborationShootingStarAnchor, ksys::act::ai::Action)
public:
    explicit CollaborationShootingStarAnchor(const InitArg& arg);
    ~CollaborationShootingStarAnchor() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;

    // map_unit_param at offset 0x20
    const int* mCollaboShootingStarStartHour_m{};
    // map_unit_param at offset 0x28
    const int* mCollaboShootingStarEndHour_m{};
};

}  // namespace uking::action
