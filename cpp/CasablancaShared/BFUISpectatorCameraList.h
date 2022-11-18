// Object: BFUISpectatorCameraList
// ClassId: 1248
// RuntimeId: 21593
// TypeInfo: 0x0000000144D42F50
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUISpectatorCameraObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpectatorCameraList : public Core::DataContainer {
        Array<CasablancaShared::BFUISpectatorCameraObject> Cameras; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISpectatorCameraList) == 0x20);
}
#pragma pack(pop)