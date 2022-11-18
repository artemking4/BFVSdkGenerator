// Object: PingMarkerInstanceData
// ClassId: 4422
// RuntimeId: 33065
// TypeInfo: 0x0000000144C829C0
#include "../Core/DataContainer.h"
#include "../Global/Uint64.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class PingMarkerInstanceData : public Core::DataContainer {
        Uint64 PlayerOnlineId; // 0x18
        Core::Vec3 WorldPosition; // 0x20
        CasablancaShared::BFUIPlayerObject Player; // 0x30
        Boolean IsEnemyPinged; // 0x38
        Boolean Active; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(PingMarkerInstanceData) == 0x40);
}
#pragma pack(pop)