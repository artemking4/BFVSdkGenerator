// Object: UICurrencyDescription
// ClassId: 5412
// RuntimeId: 12152
// TypeInfo: 0x0000000144D98C10
#include "../CasablancaShared/UIItemDescription.h"
#include "../CasablancaShared/UICurrencyType.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UICurrencyDescription : public CasablancaShared::UIItemDescription {
        char pad_0x28[0x8];
        Core::Vec3 CurrencyColor; // 0x30
        CasablancaShared::UICurrencyType CurrencyType; // 0x40
        char pad_0x44[0x4];
        UIIncubatorShared::LocalizedStringId NameSid; // 0x48
        Float32 CurrencyAlpha; // 0x50
        char pad_0x54[0x4];
        CString ImagePath; // 0x58
    }; // 0x60
    static_assert(sizeof(UICurrencyDescription) == 0x60);
}
#pragma pack(pop)