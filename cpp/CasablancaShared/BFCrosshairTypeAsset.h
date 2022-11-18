// Object: BFCrosshairTypeAsset
// ClassId: 236
// RuntimeId: 40335
// TypeInfo: 0x0000000144D5ABE0
#include "../GameShared/CrosshairTypeAsset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFCrosshairTypeAsset : public GameShared::CrosshairTypeAsset {
        CString CrosshairTypeId; // 0x20
        Float32 ZoomInFadeTime; // 0x28
        Float32 ZoomOutFadeTime; // 0x2C
        Boolean HideOnZoom; // 0x30
        Boolean ShowInHardcore; // 0x31
        char pad_0x32[0x6];
    }; // 0x38
    static_assert(sizeof(BFCrosshairTypeAsset) == 0x38);
}
#pragma pack(pop)