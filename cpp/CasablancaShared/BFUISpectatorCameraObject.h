// Object: BFUISpectatorCameraObject
// ClassId: 1249
// RuntimeId: 44812
// TypeInfo: 0x0000000144D3F0E0
#include "../Core/DataContainer.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUISpectatorCameraObject : public Core::DataContainer {
        char pad_0x18[0x8];
        Core::LinearTransform CameraTransform; // 0x20
        char pad_0x60[0x10];
    }; // 0x70
    static_assert(sizeof(BFUISpectatorCameraObject) == 0x70);
}
#pragma pack(pop)