// Object: DakarBudgetManagerEntityData
// ClassId: 2572
// RuntimeId: 11156
// TypeInfo: 0x0000000144C7C800
#include "../Entity/EntityData.h"
#include "../Casablanca/DakarBudgetAsset.h"
#include "../CasablancaShared/GameSettingNode.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarBudgetManagerEntityData : public Entity::EntityData {
        Array<Casablanca::DakarBudgetAsset> SpawnAssets; // 0x20
        CasablancaShared::GameSettingNode GlobalCustomisationIndex; // 0x28
        CasablancaShared::GameSettingNode UtterMaxNumVehicles; // 0x30
        CasablancaShared::GameSettingNode GlobalBudgetLimit; // 0x38
        Int32 dummy; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(DakarBudgetManagerEntityData) == 0x48);
}
#pragma pack(pop)