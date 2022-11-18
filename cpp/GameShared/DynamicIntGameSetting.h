// Object: DynamicIntGameSetting
// ClassId: 351
// RuntimeId: 51180
// TypeInfo: 0x0000000144E6E050
#include "../GameShared/DynamicPrimitiveGameSettingBase.h"
#include "../Global/Int32.h"

namespace GameShared {
    class DynamicIntGameSetting : public GameShared::DynamicPrimitiveGameSettingBase {
        Int32 Value; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DynamicIntGameSetting) == 0x30);
}