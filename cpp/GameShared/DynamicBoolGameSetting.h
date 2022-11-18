// Object: DynamicBoolGameSetting
// ClassId: 340
// RuntimeId: 32924
// TypeInfo: 0x0000000144E6E150
#include "../GameShared/DynamicPrimitiveGameSettingBase.h"
#include "../Global/Boolean.h"

namespace GameShared {
    class DynamicBoolGameSetting : public GameShared::DynamicPrimitiveGameSettingBase {
        Boolean Value; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(DynamicBoolGameSetting) == 0x30);
}