// Object: PrintDebugTextEntityData
// ClassId: 3037
// RuntimeId: 3263
// TypeInfo: 0x0000000144E8FB60
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class PrintDebugTextEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 TextColor; // 0x30
        CString Text; // 0x40
        Core::Vec2 ScreenPosition; // 0x48
        Float32 TimeToShow; // 0x50
        Float32 TextScale; // 0x54
        Boolean PrefixLocalPlayerId; // 0x58
        Boolean PrefixRealm; // 0x59
        Boolean PrefixTick; // 0x5A
        Boolean Enabled; // 0x5B
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(PrintDebugTextEntityData) == 0x60);
}
#pragma pack(pop)