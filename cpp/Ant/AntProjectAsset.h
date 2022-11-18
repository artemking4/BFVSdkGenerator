// Object: AntProjectAsset
// ClassId: 148
// RuntimeId: 15887
// TypeInfo: 0x0000000144DFB760
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Ant {
    class AntProjectAsset : public Core::Asset {
        CString AntNativeProjectName; // 0x20
        Ant::AntRef SceneOp; // 0x28
        Int32 ProjectId; // 0x3C
    }; // 0x40
    static_assert(sizeof(AntProjectAsset) == 0x40);
}
#pragma pack(pop)