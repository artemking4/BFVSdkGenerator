// Object: QuickscopeLevelData
// ClassId: 4939
// RuntimeId: 10409
// TypeInfo: 0x0000000144F14E00
#include "../Entity/SubWorldDataComponent.h"
#include "../QuickscopeShared/QuickscopeCategoriesAsset.h"
#include "../QuickscopeShared/QuickscopeBudgetsAsset.h"

#pragma pack(push, 8)
namespace QuickscopeShared {
    class QuickscopeLevelData : public Entity::SubWorldDataComponent {
        QuickscopeShared::QuickscopeCategoriesAsset Categories; // 0x18
        QuickscopeShared::QuickscopeBudgetsAsset Budgets; // 0x20
    }; // 0x28
    static_assert(sizeof(QuickscopeLevelData) == 0x28);
}
#pragma pack(pop)