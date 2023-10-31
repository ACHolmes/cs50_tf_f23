import sqlite3

DB_PATH = "data.db"

class DBSetup():
    def __init__(self):
        pass

    def create_table(self, table_name, config):
        with sqlite3.connect(DB_PATH, check_same_thread=False) as con:
            cur = con.cursor()

            # Every time script runs it deletes the old table
            cur.execute(f"DROP TABLE IF EXISTS {table_name}")
            con.commit()
            
            # And creates a new version of it to allow for new config
            cur.execute(f"""CREATE TABLE {table_name} {config}""")
            print(f"Created {table_name} table.")
            con.commit()


    def insert(self, table_name, columns, values):
        with sqlite3.connect(DB_PATH, check_same_thread=False) as con:
            cur = con.cursor()
            cur.execute(f"""INSERT INTO {table_name} {columns} VALUES {values}""")
            con.commit()

    def print(self, table_name):
        with sqlite3.connect(DB_PATH, check_same_thread=False) as con:
            cur = con.cursor()
            results = cur.execute(f"""SELECT * FROM {table_name}""").fetchall()
            for result in results:
                print(result)

setup = DBSetup()
setup.create_table("pokemon", """ (
                                    id INTEGER PRIMARY KEY,
                                    name VARCHAR(100),
                                    type_1 VARCHAR(100),
                                    type_2 VARCHAR(100),
                                    level INTEGER
                                    )
                                """)

setup.insert("pokemon", columns="(name, type_1, level)", values="('Pikachu', 'Electric', 24)")
setup.insert("pokemon", columns="(name, type_1, type_2, level)", values="('Charizard', 'Fire', 'Flying', 98)")
setup.insert("pokemon", columns="(name, type_1, level)", values="('Oshawott', 'Water', 100)")
setup.insert("pokemon", columns="(name, type_1, level)", values="('Mew', 'Psychic', 70)")
setup.insert("pokemon", columns="(name, type_1, level)", values="('Mudkip', 'Water', 8)")
setup.insert("pokemon", columns="(name, type_1, level)", values="('Cyndaquil', 'Fire', 12)")
setup.insert("pokemon", columns="(name, type_1, type_2, level)", values="('Pidgey', 'Flying', 'Normal', 6)")

setup.create_table("trainers", """
                                (
                                    id INTEGER PRIMARY KEY,
                                    name VARCHAR(100)
                                )
                                """)

setup.insert("trainers", columns="(name)", values="('Carter')")
setup.insert("trainers", columns="(name)", values="('Andrew')")
setup.insert("trainers", columns="(name)", values="('Mark')")
setup.insert("trainers", columns="(name)", values="('Phyllis')")


setup.create_table("partnerships", config="""
                                            (
                                                trainer_id INTEGER,
                                                poke_id INTEGER
                                            )
                                        """)

setup.insert("partnerships", columns="(poke_id, trainer_id)", values="(1, 3)")
setup.insert("partnerships", columns="(poke_id, trainer_id)", values="(2, 2)")
setup.insert("partnerships", columns="(poke_id, trainer_id)", values="(3, 2)")
setup.insert("partnerships", columns="(poke_id, trainer_id)", values="(4, 3)")
setup.insert("partnerships", columns="(poke_id, trainer_id)", values="(5, 4)")
setup.insert("partnerships", columns="(poke_id, trainer_id)", values="(6, 3)")
setup.insert("partnerships", columns="(poke_id, trainer_id))", values="(7, 1)")


setup.print("pokemon")
setup.print("trainers")
setup.print("partnerships")