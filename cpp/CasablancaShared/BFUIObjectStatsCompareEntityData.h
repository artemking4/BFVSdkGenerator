// Object: BFUIObjectStatsCompareEntityData
// ClassId: 2327
// RuntimeId: 9784
// TypeInfo: 0x0000000144D81DA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIObjectStatsCompareStrategy.h"
#include "../CasablancaShared/BFUIDynamicStatList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIObjectStatsCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::BFUIObjectStatsCompareStrategy Strategy; // 0x24
        CasablancaShared::BFUIDynamicStatList DynamicStatListA; // 0x28
        CasablancaShared::BFUIDynamicStatList DynamicStatListB; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIObjectStatsCompareEntityData) == 0x38);
}
#pragma pack(pop)