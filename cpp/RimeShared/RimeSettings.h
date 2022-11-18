// Object: RimeSettings
// ClassId: 5018
// RuntimeId: 24687
// TypeInfo: 0x0000000144F27110
#include "../Core/SystemSettings.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeSettings : public Core::SystemSettings {
        Int32 BlurKernelSize; // 0x20
        Float32 BlurDownsamplePercent; // 0x24
    }; // 0x28
    static_assert(sizeof(RimeSettings) == 0x28);
}
#pragma pack(pop)