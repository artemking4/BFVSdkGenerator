// Object: DogTagData
// ClassId: 434
// RuntimeId: 12252
// TypeInfo: 0x0000000144D014A0
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/CString.h"
#include "../CasablancaShared/DogTagCategory.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DogTagData : public GameShared::UnlockAssetBase {
        CString NameSID; // 0x58
        CString DescriptionSID; // 0x60
        CString SvgImageName; // 0x68
        CString ImageName; // 0x70
        GameShared::UnlockAssetBase Object; // 0x78
        CasablancaShared::DogTagCategory Category; // 0x80
        Boolean InvertText; // 0x84
        Boolean HidePlayerName; // 0x85
        Boolean IsAlwaysAvailable; // 0x86
        Boolean ExcludedOnXenon; // 0x87
        Boolean ExcludedOnPs3; // 0x88
        Boolean ExcludedOnWin32; // 0x89
        Boolean ExcludedOnGen4a; // 0x8A
        Boolean ExcludedOnGen4b; // 0x8B
        Boolean ExcludedOnLinux; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(DogTagData) == 0x90);
}
#pragma pack(pop)