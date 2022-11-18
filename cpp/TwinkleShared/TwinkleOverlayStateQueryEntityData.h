// Object: TwinkleOverlayStateQueryEntityData
// ClassId: 3604
// RuntimeId: 33945
// TypeInfo: 0x0000000144F66FD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleOverlayStateQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TwinkleOverlayStateQueryEntityData) == 0x28);
}
#pragma pack(pop)