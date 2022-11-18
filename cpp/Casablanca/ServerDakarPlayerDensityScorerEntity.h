// Object: ServerDakarPlayerDensityScorerEntity
// ClassId: 7493
// RuntimeId: 20483
// TypeInfo: 0x0000000144C3A280
#include "../Casablanca/ServerDakarScorer.h"

namespace Casablanca {
    class ServerDakarPlayerDensityScorerEntity : public Casablanca::ServerDakarScorer {
        char pad_0x30[0x10];
    }; // 0x40
    static_assert(sizeof(ServerDakarPlayerDensityScorerEntity) == 0x40);
}