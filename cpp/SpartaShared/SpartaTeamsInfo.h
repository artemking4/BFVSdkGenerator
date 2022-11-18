// Object: SpartaTeamsInfo
// ClassId: 4892
// RuntimeId: 1778
// TypeInfo: 0x0000000144F50A40
#include "../Core/DataContainer.h"
#include "../SpartaShared/SpartaTeamInfo.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaTeamsInfo : public Core::DataContainer {
        Array<SpartaShared::SpartaTeamInfo> Teams; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaTeamsInfo) == 0x20);
}
#pragma pack(pop)