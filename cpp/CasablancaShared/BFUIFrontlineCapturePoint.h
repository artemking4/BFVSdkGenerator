// Object: BFUIFrontlineCapturePoint
// ClassId: 1209
// RuntimeId: 49662
// TypeInfo: 0x0000000144D2FFA0
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIFrontlineCapturePoint : public Core::DataContainer {
        Int32 Dummy; // 0x18
        char pad_0x1C[0x4];
        Core::LinearTransform WorldTransform; // 0x20
    }; // 0x60
    static_assert(sizeof(BFUIFrontlineCapturePoint) == 0x60);
}
#pragma pack(pop)