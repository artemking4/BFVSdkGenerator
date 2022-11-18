// Object: DynamicFloatGameSetting
// ClassId: 349
// RuntimeId: 59029
// TypeInfo: 0x0000000144E6E0D0
#include "../GameShared/DynamicPrimitiveGameSettingBase.h"
#include "../Global/Float32.h"

namespace GameShared {
    class DynamicFloatGameSetting : public GameShared::DynamicPrimitiveGameSettingBase {
        Float32 Value; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DynamicFloatGameSetting) == 0x30);
}