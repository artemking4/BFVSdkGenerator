// Object: TwinkleOverlayEntityData
// ClassId: 3603
// RuntimeId: 51698
// TypeInfo: 0x0000000144F67050
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace TwinkleShared {
    class TwinkleOverlayEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean EnableMouseInput; // 0x24
        Boolean EnableKeyInput; // 0x25
        Boolean EnableHotkeyInput; // 0x26
        char pad_0x27[0x1];
    }; // 0x28
    static_assert(sizeof(TwinkleOverlayEntityData) == 0x28);
}
#pragma pack(pop)