// Object: LogitechLEDFadeBitmapEffectEntityData
// ClassId: 2860
// RuntimeId: 45740
// TypeInfo: 0x0000000144DBF330
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/KeyboardIndexColor.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class LogitechLEDFadeBitmapEffectEntityData : public Entity::EntityData {
        Array<DiceCommonsShared::KeyboardIndexColor> ColorArray1; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 BackgroundColor1; // 0x30
        Core::Vec3 BackgroundColor2; // 0x40
        Array<DiceCommonsShared::KeyboardIndexColor> ColorArray2; // 0x50
        Float32 Duration; // 0x58
        Boolean Enabled; // 0x5C
        char pad_0x5D[0x3];
    }; // 0x60
    static_assert(sizeof(LogitechLEDFadeBitmapEffectEntityData) == 0x60);
}
#pragma pack(pop)