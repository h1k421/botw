#pragma once

#include "Game/AI/Action/actionPlayASForAnimalUnit.h"
#include "KingSystem/ActorSystem/actAiAction.h"

namespace uking::action {

class PlayASForAnimalUnitRestricted : public PlayASForAnimalUnit {
    SEAD_RTTI_OVERRIDE(PlayASForAnimalUnitRestricted, PlayASForAnimalUnit)
public:
    explicit PlayASForAnimalUnitRestricted(const InitArg& arg);
    ~PlayASForAnimalUnitRestricted() override;

    bool init_(sead::Heap* heap) override;
    void enter_(ksys::act::ai::InlineParamPack* params) override;
    void leave_() override;
    void loadParams_() override;

protected:
    void calc_() override;
};

}  // namespace uking::action
