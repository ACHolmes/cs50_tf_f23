SELECT name FROM pokemon
WHERE id in (
    SELECT poke_id
    FROM partnerships
    WHERE trainer_id = (
        SELECT id 
        FROM trainers 
        WHERE name = 'Andrew'
    )
);;