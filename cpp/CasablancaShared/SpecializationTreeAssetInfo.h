// Object: SpecializationTreeAssetInfo
// ClassId: 4900
// RuntimeId: 41062
// TypeInfo: 0x0000000144D50BD0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUISpecTreeInstanceObject.h"
#include "../CasablancaShared/SpecializationRect.h"
#include "../CasablancaShared/SpecializationItemInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpecializationTreeAssetInfo : public Core::DataContainer {
        CString LeftHeaderSid; // 0x18
        CString RightHeaderSid; // 0x20
        CasablancaShared::BFUISpecTreeInstanceObject SpecTree; // 0x28
        CasablancaShared::SpecializationRect SpecTreeRect; // 0x30
        Array<CasablancaShared::SpecializationItemInfo> Items; // 0x40
    }; // 0x48
    static_assert(sizeof(SpecializationTreeAssetInfo) == 0x48);
}
#pragma pack(pop)