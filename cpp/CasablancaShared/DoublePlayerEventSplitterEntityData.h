// Object: DoublePlayerEventSplitterEntityData
// ClassId: 2670
// RuntimeId: 46677
// TypeInfo: 0x0000000144D0C130
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DoublePlayerEventSplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DoublePlayerEventSplitterEntityData) == 0x28);
}
#pragma pack(pop)