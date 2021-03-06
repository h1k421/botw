#pragma once

#include "KingSystem/ActorSystem/actAiQuery.h"

namespace uking::query {

class IsNeedEquipWeapon : public ksys::act::ai::Query {
    SEAD_RTTI_OVERRIDE(IsNeedEquipWeapon, Query)
public:
    explicit IsNeedEquipWeapon(const InitArg& arg);
    ~IsNeedEquipWeapon() override;
    int doQuery() override;

    void loadParams() override;
    void loadParams(const evfl::QueryArg& arg) override;
};

}  // namespace uking::query
