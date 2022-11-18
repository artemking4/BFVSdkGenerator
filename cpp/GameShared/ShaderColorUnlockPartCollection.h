// Object: ShaderColorUnlockPartCollection
// ClassId: 4588
// RuntimeId: 55587
// TypeInfo: 0x0000000144E817C0
#include "../GameShared/ShaderCustomizationUnlockPartCollection.h"
#include "../GameShared/ColorReference.h"
#include "../GameShared/ColorUnlockPartData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ShaderColorUnlockPartCollection : public GameShared::ShaderCustomizationUnlockPartCollection {
        GameShared::ColorReference DefaultColorReference; // 0x30
        Array<GameShared::ColorUnlockPartData> UnlockParts; // 0x38
    }; // 0x40
    static_assert(sizeof(ShaderColorUnlockPartCollection) == 0x40);
}
#pragma pack(pop)