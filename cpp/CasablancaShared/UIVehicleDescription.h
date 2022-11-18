// Object: UIVehicleDescription
// ClassId: 5458
// RuntimeId: 13620
// TypeInfo: 0x0000000144D99610
#include "../CasablancaShared/UIItemDescription.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIVehicleDescription : public CasablancaShared::UIItemDescription {
        char pad_0x28[0x8];
        Core::LinearTransform InspectionTransform; // 0x30
        UIIncubatorShared::LocalizedStringId NameSid; // 0x70
        UIIncubatorShared::LocalizedStringId DescriptionSid; // 0x78
        CString ImagePath; // 0x80
        Float32 RelativeVehicleSize; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(UIVehicleDescription) == 0x90);
}
#pragma pack(pop)