SELECT * FROM pokemon
JOIN partnerships ON pokemon.id = partnerships.poke_id
JOIN trainers on partnerships.trainer_id = trainers.id;;