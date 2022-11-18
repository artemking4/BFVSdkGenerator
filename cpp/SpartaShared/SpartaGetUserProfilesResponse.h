// Object: SpartaGetUserProfilesResponse
// ClassId: 4822
// RuntimeId: 14937
// TypeInfo: 0x0000000144F506C0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../SpartaShared/SpartaUserProfilePayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaGetUserProfilesResponse : public SpartaShared::SpartaPayload {
        Array<SpartaShared::SpartaUserProfilePayload> UserProfiles; // 0x18
        CString ProfileImageSize; // 0x20
        Boolean Success; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SpartaGetUserProfilesResponse) == 0x30);
}
#pragma pack(pop)