// Object: AwardAchievementData
// ClassId: 5242
// RuntimeId: 38805
// TypeInfo: 0x0000000144D6C5B0
#include "../CasablancaShared/AwardData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint16.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardAchievementData : public CasablancaShared::AwardData {
        Uint32 CompletionValue; // 0x98
        Uint16 AchievementId; // 0x9C
        Boolean CounterAsProgressionSource; // 0x9E
        char pad_0x9F[0x1];
    }; // 0xA0
    static_assert(sizeof(AwardAchievementData) == 0xA0);
}
#pragma pack(pop)