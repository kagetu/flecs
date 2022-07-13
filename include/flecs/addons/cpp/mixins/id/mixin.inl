
/** Get id from a type.
 */
template <typename T>
flecs::id id() const;

/** Id factory.
 */
template <typename ... Args>
flecs::id id(Args&&... args) const;

/** Get pair id from relation, object
 */
template <typename First, typename Second>
flecs::id pair() const;

/** Get pair id from relation, object
 */
template <typename First>
flecs::id pair(entity_t o) const;

/** Get pair id from relation, object
 */
flecs::id pair(entity_t r, entity_t o) const;
