// Object: SpartaGetUserProfiles
// ClassId: 4821
// RuntimeId: 56187
// TypeInfo: 0x0000000144F50840
#include "../SpartaShared/SpartaPayload.h"
#include "../SpartaShared/SpartaUserId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaGetUserProfiles : public SpartaShared::SpartaPayload {
        Array<SpartaShared::SpartaUserId> Users; // 0x18
        CString ProfileImageSize; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaGetUserProfiles) == 0x28);
}
#pragma pack(pop)