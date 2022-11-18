// Object: LogitechLEDConstantBitmapEffectEntityData
// ClassId: 2856
// RuntimeId: 867
// TypeInfo: 0x0000000144DBF3B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/KeyboardIndexColor.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDConstantBitmapEffectEntityData : public Entity::EntityData {
        Array<DiceCommonsShared::KeyboardIndexColor> ColorArray; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 BackgroundColor; // 0x30
        Boolean Enabled; // 0x40
        char pad_0x41[0xF];
    }; // 0x50
    static_assert(sizeof(LogitechLEDConstantBitmapEffectEntityData) == 0x50);
}
#pragma pack(pop)