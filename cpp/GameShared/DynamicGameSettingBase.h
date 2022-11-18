// Object: DynamicGameSettingBase
// ClassId: 338
// RuntimeId: 4765
// TypeInfo: 0x0000000144E6E250
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Int32.h"

namespace GameShared {
    class DynamicGameSettingBase : public Core::DataContainerPolicyAsset {
        Int32 Identifier; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DynamicGameSettingBase) == 0x28);
}