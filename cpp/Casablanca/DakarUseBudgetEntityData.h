// Object: DakarUseBudgetEntityData
// ClassId: 2593
// RuntimeId: 36808
// TypeInfo: 0x0000000144C7C780
#include "../Entity/EntityData.h"
#include "../Casablanca/DakarBudgetAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DakarUseBudgetEntityData : public Entity::EntityData {
        Casablanca::DakarBudgetAsset SpawnerType; // 0x20
        Boolean HasPriority; // 0x28
        Boolean IgnoreGlobalBudgetLimit; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(DakarUseBudgetEntityData) == 0x30);
}
#pragma pack(pop)