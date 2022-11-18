// Object: BFUIPostProcessEntityData
// ClassId: 2345
// RuntimeId: 6650
// TypeInfo: 0x0000000144D866A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec4.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIPostProcessEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec4 Vec4Param1; // 0x30
        Core::Vec4 Vec4Param2; // 0x40
        Core::Vec4 Vec4Param3; // 0x50
        Core::Vec4 Vec4Param4; // 0x60
        Boolean OverlayShadowEnabled; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(BFUIPostProcessEntityData) == 0x80);
}
#pragma pack(pop)